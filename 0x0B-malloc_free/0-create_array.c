#include "main.h"
/**
 * create_array - creates an array of chars, and initializes it with a specific char.
 * @size: size of the array.
 * @c: char to initialize the array.
 *
 * Return: pointer to the array or 0 if fails.
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (0);

	arr = malloc(sizeof(char) * size);

	if (arr == 0)
		return (0);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
