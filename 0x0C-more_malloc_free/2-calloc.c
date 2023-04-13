#include "main.h"

/**
 * _calloc - allocates memory for an arra
 * @nmemb: number of elements to allocate
 * @size: size of each element
 *
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;
	char *mem;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	mem = ptr;
	for (i = 0; i < nmemb * size; i++)
		mem[i] = 0;

	return (ptr);
}
