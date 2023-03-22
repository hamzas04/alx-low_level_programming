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

#endif
