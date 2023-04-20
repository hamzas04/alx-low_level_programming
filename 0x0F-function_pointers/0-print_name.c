#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - prints a name
 *
 * @name: pointer to a string containing
 * @f: pointer to a function that prints
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
