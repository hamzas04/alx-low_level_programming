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
 * print_alphabet - prints the alphabet in lowercase
 *
 * Return: void
 */

void print_alphabet(void);

/**
 * 10 x alphabet - prints 10 times the alphabet, in lowercase
 *
 * Return : void
 */

void print_alphabet_x10(void);

/**
 * _islower - Checks if a character is lowercase
 * @c: The character to be checked
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */

int _islower(int c);

/**
 *
 * _isalpha - checks if a character is an alphabetic character
 * @c: character to be checked
 * Return: 1 if c is an alphabetic character, 0 otherwise
*/

int _isalpha(int c);

/**
 * print_sign - prints the sign of a number
 *
 * @n: integer to check
 *
 * Return: 1 if positive, 0 if zero, -1 if negative
 */

int print_sign(int n);

/**
 * _abs - Computes the absolute value of an integer
 * @n: The integer to compute the absolute value of
 *
 * Return: The absolute value of n
 */

int _abs(int n);

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number to extract the last digit from
 *
 * Return: The value of the last digit
 */

int print_last_digit(int n);

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer
 *
 * Return: void
 */

void jack_bauer(void);

void times_table(void);

/**
 *
 * add - adds two integers and returns the result.
 * @a: first integer
 * @b: second integer
 * Return: sum of a and b
*/

int add(int a, int b);

#endif
