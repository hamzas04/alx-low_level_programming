#include "main.h"

/**
 * _puts - prints a string followed by a new line to stdout
 *
 * @str: pointer to the string
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		putchar(str[i]);  // write the character to stdout
	}

	putchar('\n');  // write a newline character to stdout
}
