#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * to the buffer pointed to by dest
 *
 * @dest: pointer to the destination array where the content is to be copied
 * @src: pointer to the source of data to be copied
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);
}
