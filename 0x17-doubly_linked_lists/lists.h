#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/* Struct definition for doubly linked list */
typedef struct dlistint_s
{
	int n;					   /* Data element */
	struct dlistint_s *prev;	 /* Pointer to the previous node */
	struct dlistint_s *next;	 /* Pointer to the next node */
} dlistint_t;

/* Function prototypes */
size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
void free_dlistint(dlistint_t *head);
#endif /* LISTS_H */
