#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - searches for an integer in an array
 * @array: the array to search
 * @size: the number of elements in the array
 * @cmp: a function pointer to the function
 *
 * Return: the index of the first matching
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}

	return (-1);
}
