#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/* Struct definition for doubly linked list */
typedef struct dlistint_s
{
	int n;					   /* Data element */
	struct dlistint_s *prev;	 /* Pointer to the previous node */
	struct dlistint_s *next;	 /* Pointer to the next node */
} dlistint_t;

/* Function prototypes */
size_t print_dlistint(const dlistint_t *h);

#endif /* LISTS_H */
