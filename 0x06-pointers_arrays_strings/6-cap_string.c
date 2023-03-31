#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @str: pointer to the string to modify
 *
 * Return: a pointer to the modified string
 */
char *cap_string(char *str)
{
	char *s = str;
	int capitalize_next = 1;

	while (*s != '\0')
	{
		if (capitalize_next && (*s >= 'a' && *s <= 'z'))
		{
			*s = *s - 'a' + 'A';
		}

		capitalize_next = 0;

		switch (*s)
		{
			case ' ':
			case '\t':
			case '\n':
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '\"':
			case '(':
			case ')':
			case '{':
			case '}':
				capitalize_next = 1;
				break;
		}

		s++;
	}

	return str;
}
