#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: pointer to the string to modify
 *
 * Return: a pointer to the modified string
 */
char *string_toupper(char *str)
{
	char *s = str;

	while (*s != '\0')
	{
		if (*s >= 'a' && *s <= 'z')
		{
			*s = *s - 'a' + 'A';
		}
		s++;
	}

	return (str);
}
