#include <stdio.h>

/**
 * print_name - Prints a name.
 * @name: A pointer to the name to print.
 * @f: A function pointer to a function that takes a char pointer argument
 *		 and returns nothing. This function is used to format the name before
 *		 printing it.
 *
 * Return: void.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL) {
		return;
	}

	f(name);

	printf("\n");
}
