#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "backend-bst.h"

#define POOL_SIZE 10

// record structure
struct record {
	char name[3];
	char number[4];
	struct record* left;
	struct record* right;
};

void print_name(struct record*);
void print_number(struct record*);

// pool of memory
static struct record pool[POOL_SIZE];	// static because pool is strictly private
struct record* top = pool;	// a pointer variable for pool stack top.

// comparison function for records
int compare(char key[3], struct record*);

// data
struct record* data = NULL;	// Initially NULL.

void init_pool() {	// Initialize the pool; Use right instead of next!!!
	int i;
	struct record* r = pool;
	struct record* s;

	pool[POOL_SIZE - 1].right = NULL;

	for (i = 1; i < POOL_SIZE; i++) {
		s = r++;
		s->right = r;
	}
}

// Get a node from the pool. Returns NULL if pool is empty. (A BETTER DESIGN)
// When calling new(), make sure to check if it is NULL.
struct record* new_node() {
	struct record* r;

	if (top == NULL)
		return NULL;

	r = top;
	top = r->right;	// Again, right instead of next.
	
	return r;
}

// Push a node to the pool.
void free_node(struct record* r) {
	r->right = top;	// Again, right instead of next.
	top = r;
}

/**************************
Address Book by binary search tree
**************************/

void search(char name[3]) {
	struct record* r;	// Pointer to record being compared.
						// data or left/right field of a node.
	int result;
	r = data;

	while (r != NULL) {
		if ((result = compare(name, r)) < 0)
			r = r->left;
		else if (result == 0) {
			print_name(r);
			printf(" : ");
			print_number(r);
			printf(" was found.\n");

			return;
		}
		else // case > 0
			r = r->right;
	}

	printf("Couldn't find the name.\n");
}

void add(char* name, char* number) {
	// Message to print
	// printf("Can't add. The name already exists!\n");
	// printf("Can't add. The pool is empty!\n");
	// printf("The name was successfully added!\n");

	struct record* tmp = new_node();

	if (tmp == NULL) {
		printf("Can't add. The pool is empty!\n");
		return;
	}
	else {
		strncpy(tmp->name, name, 3);
		strncpy(tmp->number, number, 4);
		tmp->left = tmp->right = NULL;
	}

	struct record* src = data;
	struct record* fol = NULL;
	int dir = -1, cmp;

	if (src == NULL) {
		data = tmp;
		printf("The name was successfully added!\n");
		return;
	}
	else {
		while (src != NULL) {
			if ((cmp = compare(name, src)) == 0) {
				printf("Can't add. The name already exist!\n");
				free_node(tmp);
				return;
			}
			else if (cmp > 0) {
				fol = src;
				src = src->right;
				dir = 1;
			}
			else {
				fol = src;
				src = src->left;
				dir = 0;
			}
		}

		if (dir == 1) {
			fol->right = tmp;
			printf("The name was successfully added!\n");
		}
		else if (dir == 0) {
			fol->left = tmp;
			printf("The name was successfully added!\n");
		}
	}
}

// The most complicated.
void Delete(char name[3]) {
	// Message to print
	// printf("The name was deleted.\n");
	// printf("Couldn't find the name.\n");

	struct record* src = data;
	struct record* fol = NULL;
	int dir = -1, cmp;

	while (src != NULL) {
		if ((cmp = compare(name, src)) == 0) {
			if (src->left == NULL && src->right == NULL) {
				if (dir == 0) fol->left = NULL;
				else if (dir == -1) data = NULL;
				else fol->right = NULL;

				free_node(src);
				printf("The name was deleted.\n");

				return;
			}
			else if (src->left == NULL || src->right == NULL) {
				if (src->left == NULL) {
					if (dir == 0) fol->left = src->right;
					else if (dir == -1) data = src->right;
					else fol->right = src->right;
				}
				else {
					if (dir == 0) fol->left = src->left;
					else if (dir == -1) data = src->left;
					else fol->right = src->left;
				}

				free_node(src);
				printf("The name was deleted.\n");

				return;
			}
			else {
				struct record* del = src->right;
				struct record* folDel = src;

				while (1) {
					if (del->left == NULL) break;
					else {
						folDel = del;
						del = del->left;
					}
				}
				folDel->left = del->right;

				if (dir == 0) {
					fol->left = del;
					del->right = src->right;
				}
				else if (dir == -1) {
					data = del;
					del->right = src->right;
				}
				else {
					fol->right = del;
					del->right = src->right;
				}

				free_node(src);
				printf("The name was deleted.\n");

				return;
			}
		}
		else if (cmp > 0) {
			fol = src;
			src = src->right;
			dir = 1;
		}
		else {
		fol = src;
		src = src->left;
		dir = 0;
		}
	}

	printf("Couldn't find the name.\n");
}

/* Just a wrapper of strncmp().
Regard strncmp(a, b) as a-b.
Negative value if key is less than r.
0 if key and r are equal.
Positive value if key is greater than r. */
int compare(char key[3], struct record* r) {
	return strncmp(key, r->name, 3);
}

void print_data(char* s, int n) {
	int i;
	for (i = 0; i < n; i++)
		putchar(s[i]);
}

void print_name(struct record* r) {
	print_data(r->name, 3);
}

void print_number(struct record* r) {
	print_data(r->number, 4);
}

void print_inorder(struct record* t) {
	if (t == NULL) return;

	struct record* src = t;

	print_inorder(src->left);

	print_name(src);
	printf(" : ");
	print_number(src);
	printf("\n");

	print_inorder(src->right);
}

void print_list() {
	print_inorder(data);
}

// returns the height of the BST.
int height(struct record* t) {
	// dummy return. Should return a valid height.
	//return 0;

	if (t == NULL)
		return -1;

	int leftH = 0, rightH = 0;

	leftH = height(t->left) + 1;
	rightH = height(t->right) + 1;

	return(leftH > rightH) ? leftH : rightH;
}

void print_height() {
	printf("The Address Book BST's height is %d.\n", height(data));
}
