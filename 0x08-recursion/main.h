#ifndef MAIN_H
#define MAIN_H
/**
 * _sqrt_recursive - recursively calculates the square root of n
 * @n: number to calculate the square root of
 * @i: possible square root
 *
 * Return: square root of n, -1 if n does not have a natural square root
 */
int _sqrt_recursive(int n, int i);

int _putchar(char c);

/* Function that prints a string, followed by a new line */
void _puts_recursion(char *s);

/* Function that prints a string in reverse */
void _print_rev_recursion(char *s);

/* Function that returns the length of a string */
int _strlen_recursion(char *s);

/* Function that returns the factorial of a given number */
int factorial(int n);

/* Function that returns the value of x raised to the power of y */
int _pow_recursion(int x, int y);

/* Function that returns the natural square root of a number */
int _sqrt_recursion(int n);

/* Function that returns 1 if the input integer is a prime number, otherwise return 0 */
int is_prime_number(int n);

/* Function that returns 1 if a string is a palindrome and 0 if not */
int is_palindrome(char *s);

/* Function that compares two strings and returns 1 if the strings can be considered identical, otherwise return 0 */
int wildcmp(char *s1, char *s2);

#endif /* MAIN_H */
