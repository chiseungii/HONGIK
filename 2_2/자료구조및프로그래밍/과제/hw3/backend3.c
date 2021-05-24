#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "backend3.h"

#define POOL_SIZE 5

// pool of memory
struct record pool[POOL_SIZE];
struct record* top = pool;	// pool is constant. We need a pointer variable for stack top.

// comparison function for records
int compare(char key[3], struct record*);

// data
struct record* data = NULL;	//Initially NULL.

void init_pool() {	// Initialize the pool
	int i;
	struct record* r = pool;
	struct record* s;

	pool[POOL_SIZE - 1].next = NULL;

	for (i = 1; i < POOL_SIZE; i++) {
		s = r++;
		s->next = r;
	}
}

// Get a node from the pool. Exit if pool is empty.
struct record* new_node() {
	//printf("new_node() was not implemented.\n");
	// Error Message for OVERFLOW: printf("Pool is empty. Bye!\n");
	// Your program quits with "exit(0)", if OVERFLOW occurs.

	struct record* tmp;

	if (top == NULL) {
		printf("Pool is empty. Bye!\n");
		exit(0);
	}

	tmp = top;
	top = top->next;
	
	return tmp;
}

// Push a node to the pool.
void free_node(struct record* r) {
	r->next = top;
	top = r;
}

void add(char* name, char* number) {
	//printf("add() was not implemented.\n");
	// Error Message for duplicate name
	// printf("Can't add. The name already exists!\n");

	struct record* front, * back;
	front = back = data;

	struct record* new = new_node();
	strncpy(new->name, name, 3);
	strncpy(new->number, number, 4);

	if (data == NULL) {
		new->next = NULL;
		data = new;

		return;
	}

	while (front != NULL) {
		if (compare(name, front->name) > 0) {
			back = front;
			front = front->next;
		}
		else if (compare(name, front->name) == 0) {
			printf("Can't add. The name already exists!\n");
			
			return;
		}
		else {
			back->next = new;
			new->next = front;

			return;
		}
	}

	back->next = new;
	new->next = NULL;
}

void search(char name[3]) {
	struct record* r = data;
	int result;

	while (r != NULL && (result = compare(name, r)) > 0)
		r = r->next;

	if (r == NULL || result < 0)
		printf("Couldn't find the name.\n");
	else {
		print_name(r);
		printf(" : ");
		print_number(r);
		printf(" was found.\n");
	}
}

void Delete(char name[3]) {
	//printf("delete() is not implemented.\n");

	struct record* front, * back;
	front = data; back = NULL;

	while (front != NULL) {
		if (compare(name, front->name) != 0) {
			back = front;
			front = front->next;
		}
		else {
			back->next = front->next;
			free_node(front);
			printf("The name was deleted.\n");

			return;
		}
	}
}

/* Just a wrapper of strncmp(), except for the case r is NULL.
 Negative value if key is less than r.
 0 if key and r are equal.
 Positive value if key is greater than r. */
int compare(char key[3], struct record* r) {
	if (r == NULL)
		return -1;
	else
		return strncmp(key, r->name, 3);
}

// Prints ith name.
void print_name(struct record* r) {
	print_data(r->name, 3);
}

// Prints ith number.
void print_number(struct record* r) {
	print_data(r->number, 4);
}

void print_data(char* s, int n) {
	int i;
	for (i = 0; i < n; i++)
		putchar(s[i]);
}

void print_list() {
	//printf("print_list() was not implemented.\n");

	struct record* tmp = data;

	while (tmp != NULL) {
		print_name(tmp);
		printf(" : ");
		print_number(tmp);
		printf("\n");
		tmp = tmp->next;
	}
}
