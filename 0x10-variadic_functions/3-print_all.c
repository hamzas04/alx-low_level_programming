#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints a variable number of arguments using a format string
 * @format: the format string containing the types of the arguments
 *		  c: char
 *		  i: integer
 *		  f: float
 *		  s: char * (if the string is NULL, print (nil) instead)
 *		  any other char should be ignored
 * @...: the variadic arguments to print
 */
void print_all(const char * const format, ...)
{
	va_list args;
	va_start(args, format);

	char c;
	int i;
	float f;
	char *s;
	int printed = 0;

	while ((c = *format++) != '\0')
	{
		if (printed)
		{
			printf(", ");
		}
		switch (c)
		{
			case 'c':
				i = va_arg(args, int);
				printf("%c", i);
				printed = 1;
				break;
			case 'i':
				i = va_arg(args, int);
				printf("%d", i);
				printed = 1;
				break;
			case 'f':
				f = (float)va_arg(args, double);
				printf("%f", f);
				printed = 1;
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
				{
					printf("(nil)");
				}
				else
				{
					printf("%s", s);
				}
				printed = 1;
				break;
			default:
				break;
		}
	}

	va_end(args);
	printf("\n");
}
