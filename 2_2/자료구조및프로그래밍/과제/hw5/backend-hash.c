#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "backend-hash.h"

#define HASH_PRIME 17
#define POOL_SIZE 100

int name_to_num(char name[3]) {
	int x;

	x = name[0];
	x = x << 8;
	x = x + name[1];
	x = x << 8;

	return x + name[2];
}

int hash(char name[3]) {
	return name_to_num(name) % HASH_PRIME;
}
/* "abc" and "bbb" have the same has value. So do abt and bbs. */

// record structure
struct record {
	char name[3];
	char number[4];
	struct record* next;
};

// pool of memory
struct record pool[POOL_SIZE];
struct record* top = pool;	// a pointer variable for stack top.

// utility function declarations
int compare(char key[3], struct record*);
void print_name(struct record*);
void print_number(struct record*);
void print_data(char*, int);

// Hash table: an array of has values.
struct record* hash_table[HASH_PRIME];

// Initially, each pointer of the hash table is valued NULL.
void init_hash_table() {
	int i;

	for (i = 0; i < HASH_PRIME; i++)
		hash_table[i] = NULL;
}

// Printing all the addresses does not make a good sense in hashing...

// Still use the same memory management.
void init_pool() {	// Initialize the pool.
	int i;
	struct record* r = pool;
	struct record* s;

	pool[POOL_SIZE - 1].next = NULL;

	for (i = 1; i < POOL_SIZE; i++) {
		s = r++;
		s->next = r;
	}
}

void init() {
	init_pool();
	init_hash_table();
}

// Get a node from the pool. Returns NULL if pool is empty. (A BETTER DESIGN)
// When calling new(), make sure to check if it is NULL.
struct record* new_node() {
	struct record* r;

	if (top == NULL)
		return NULL;

	r = top;
	top = r->next;

	return r;
}

// Push a node to the pool.
void free_node(struct record* r) {
	r->next = top;
	top = r;
}

/****************************
IMPORTANT NOTE on add()
 1. Allow duplicate names.
 2. Put in front of the linked list.
****************************/
void add(char* name, char* number) {
	int hh = hash(name);
	struct record* r = hash_table[hh];

	struct record* p;

	// Messages to print
	// printf("Can't add. The pool is empty!\n");
	// printf("The name was successfully added!\n");

	p = new_node();

	if (p == NULL) {
		printf("Can't add. The pool is empty!\n");
		return;
	}

	strncpy(p->name, name, 3);
	strncpy(p->number, number, 4);

	p->next = r;
	hash_table[hh] = p;

	printf("The name was successfully added!\n");
}

/**************************
IMPORTANT NOTE on search()
Because we allow duplicate names, search() finds the most recently-added name.
Prints the number of comparisons.
**************************/
void search(char name[3]) {
	struct record* r = hash_table[hash(name)];

	// Messages to print
	// printf("Couldn't find the name.\n");

	int cmp, cnt = 0;
	char flag = 0;

	while (r != NULL) {
		cnt++;

		if ((cmp = compare(name, r)) == 0) {
			print_name(r);
			printf(" : ");
			print_number(r);
			printf(" was found.\n");
			flag = 1;

			break;
		}
		else r = r->next;
	}

	if (!flag) printf("Couldn't find the name.\n");
	printf("%d key comparisons were made.\n", cnt);
}

/***************************
IMPORTANT NOTE on delete()
Because we allow duplicate names, delete() removes the most recently-added name.
Prints the number of comparisons.
***************************/
void Delete(char name[3]) {
	// Messages to print
	// printf("Couldn't find the name.\n");
	// printf("The name was successfully deleted!\n");

	struct record* r, * p;
	r = hash_table[hash(name)];
	p = r;

	int cnt = 0, cmp;
	char flag = 0;

	while (r != NULL) {
		cnt++;

		if ((cmp = compare(name, r)) == 0) {
			p->next = r->next;
			free_node(r);
			printf("The name was successfully deleted!\n");
			flag = 1;

			break;
		}
		else {
			p = r;
			r = r->next;
		}
	}

	if (!flag) printf("Couldn't find the name.\n");
	printf("%d key comparisons were made.\n", cnt);
}

/* Just a wrapper of strncmp().
 Negative value if key is less than r.
 0 if key and r are equal.
 Positive value if key is greater than r. */
int compare(char key[3], struct record* r) {
	return strncmp(key, r->name, 3);
}

void print_name(struct record* r) {
	print_data(r->name, 3);
}

void print_number(struct record* r) {
	print_data(r->number, 4);
}

void print_data(char* s, int n) {
	int i;

	for (i = 0; i < n; i++)
		putchar(s[i]);
}
