#include "main.h"
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = _strlen_rec(s);
	if (len <= 1)
		return (1);
	return (_is_palindrome_rec(s, len));
}

/**
 * _is_palindrome_rec - recursively checks if a string is a palindrome
 * @s: string to check
 * @len: length of the string
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int _is_palindrome_rec(char *s, int len)
{
	if (len <= 1)
		return (1);
	if (s[0] != s[len - 1])
		return (0);
	return (_is_palindrome_rec(s + 1, len - 2));
}

/**
 * _strlen_rec - returns the length of a string
 * @s: string to get length of
 *
 * Return: length of the string
 */
int _strlen_rec(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_rec(s + 1));
}
