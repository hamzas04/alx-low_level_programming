#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - Frees a listint_t list.
 * @head: Pointer to the head of the list.
 */
void free_listint(listint_t *head)
{
    listint_t *current, *next;

    current = head;
    while (current != NULL)
    {
        next = current->next;
        free(current);
        current = next;
    }
}
