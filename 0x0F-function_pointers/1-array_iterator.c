#include <stddef.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a function on each element
 * @array: the array to iterate over
 * @size: the size of the array
 * @action: a function pointer to the function
 *
 * Return: none
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
