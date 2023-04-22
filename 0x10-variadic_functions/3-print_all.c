#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_all(const char* const format, ...) {
	va_list args;
	va_start(args, format);

	char c;
	int i;
	float f;
	char* s;
	int printed = 0;

	while ((c = *format++) != '\0') {
		if (printed) {
			printf(", ");
		}
		switch (c) {
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
				s = va_arg(args, char*);
				if (s == NULL) {
					printf("(nil)");
				} else {
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
