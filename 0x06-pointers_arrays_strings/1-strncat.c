#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: maximum number of bytes to be used from src
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	/* find the end of the destination string */
	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	/* concatenate the source string to the destination string */
	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i + j] = src[j];
	}

	/* add the terminating null byte */
	dest[i + j] = '\0';

	return (dest);
}
