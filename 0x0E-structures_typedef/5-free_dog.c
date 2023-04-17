#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees dogs
 * @d: Pointer to struct dog_t
 *
 * Description: This function frees the memory allocated for the name and
 * as well as the memory allocated for the dog_t structure itself
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			free(d->name);
		if (d->owner != NULL)
			free(d->owner);
		free(d);
	}
}
