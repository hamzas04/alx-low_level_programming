#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: pointer to the string
 *
 * Return: taille of the string
 */
int _strlen(char *s)
{
	int taille = 0;

	while (*s != '\0')
	{
		taille++;
		s++;
	}

	return taille;
}
