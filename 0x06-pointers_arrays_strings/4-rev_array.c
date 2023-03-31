#include "main.h"
/**
 * reverse_array - reverses an array of integers
 * @a: pointer to the array to reverse
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
