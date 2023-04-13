#include "main.h"

/**
 * malloc_checked - allocate memory using malloc
 * @b: amount of memory to allocate
 *
 * Return: pointer to the allocated memory
 * If malloc fails, the function causes normal
 * status value of 98.
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
