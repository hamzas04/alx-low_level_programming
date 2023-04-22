#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * @format: list of types of arguments passed to the function.
 * c: char
 * i: integer
 * f: float
 * s: char * (if the string is NULL, print (nil) instead
 * any other char should be ignored.
 * Return: void.
 */

void print_all(const char * const format, ...)
{
	va_list args;
	va_start(args, format);

	const char *c;
	int i;
	float f;
	char *s;
	int printed = 0;

	while ((c = format++) != '\0')
	{
		switch (*c)
		{
			case 'c':
				printf("%c", va_arg(args, int));
				printed = 1;
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				printed = 1;
				break;
			case 'f':
				printf("%f", va_arg(args, double));
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
		if (*(c + 1) && printed)
			printf(", ");
		printed = 0;
	}
	printf("\n");
	va_end(args);
}
