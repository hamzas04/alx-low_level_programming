#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

/**
 * _putchar - writes the character c to stdout
 *
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned.
 */

int _putchar(char c);


/**
 * _isupper - Checks for an uppercase character
 *
 * @c: The character to check
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c);


/**
 * _isdigit - Checks for a digit (0 through 9)
 *
 * @c: The character to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c);


/**
 * mul - Multiplies two integers
 *
 * @a: The first integer to multiply
 * @b: The second integer to multiply
 *
 * Return: The product of a and b
 */
int mul(int a, int b);


/**
 * print_numbers - prints the numbers from 0 to 9 followed by a new line
 *
 * Return: void
 */
void print_numbers(void);

/**
 * print_most_numbers - prints the numbers from 0 to 9, except 2 and 4,
 *                      followed by a new line
 *
 * Return: void
 */
void print_most_numbers(void);


void more_numbers(void);

/**
 * print_line - Draws a straight line in the terminal.
 *
 * @n: Number of times the character _ should be printed.
 *
 * Return: void.
 */
void print_line(int n);


/* function that draws a diagonal line on the terminal */
void print_diagonal(int n);

/* function that prints a square followed by a new line */
void print_square(int size);

/* function that prints a triangle followed by a new line */
void print_triangle(int size);


#endif
