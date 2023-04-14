#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>

/* Prototypes */
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
/**
 * _isdigit - Checks if a string contains only digits
 * @s: String to check
 *
 * Return: 1 if s only contains digits, 0 otherwise
 */
int _isdigit(char *s);
/**
 * _puts - Prints a string to stdout
 * @s: String to print
 */
void _puts(char *s);
/**
 * _strlen - Calculates the length of a string
 * @s: String to calculate length of
 *
 * Return: Length of s
 */
int _strlen(char *s);
/**
 * _calloc - Allocates memory for an array
 * @nmemb: Number of elements in the array
 * @size: Size of each element
 *
 * Return: Pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size);
/**
 * multiply - Multiplies two positive
 * @num1: First number to multiply
 * @num2: Second number to multiply
 */
void multiply(char *num1, char *num2);

#endif /* MAIN_H */
