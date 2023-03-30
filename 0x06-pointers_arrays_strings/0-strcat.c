#include "mainh."
/**
 * _strcat - concatenates two strings
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 *
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	/* find the end of the destination string */
	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	/* concatenate the source string to the destination string */
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}

	/* add the terminating null byte */
	dest[i + j] = '\0';

	return (dest);
}
