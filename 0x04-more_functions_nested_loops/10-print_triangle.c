#include "main.h"

/**
 * print_triangle - prints a triangle of size `size` to the terminal
 * @size: the size of the triangle to print
 */
void print_triangle(int size)
{
    if (size <= 0)
    {
        _putchar('\n');
    }
    else
    {
        int i, j;

        for (i = 1; i <= size; i++)
        {
            for (j = 1; j <= i; j++)
            {
                _putchar('#');
            }
            _putchar('\n');
        }
    }
}
