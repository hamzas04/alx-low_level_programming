#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a new line
 *
 * @s: pointer to the string
 */
void print_rev(char *s)
{
	int len = 0;
	int i;

	while (s[len] != '\0')  // find the length of the string
	{
		len++;
	}

	for (i = len - 1; i >= 0; i--)  // iterate backwards through the string
	{
		_putchar(s[i]);  // write the character to stdout
	}

	_putchar('\n');  // write a newline character to stdout
}
