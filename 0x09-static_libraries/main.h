#ifndef MAIN_H
#define MAIN_H

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * _islower - checks for lowercase character
 * @c: The character to check
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c);

/**
 * _isalpha - checks for alphabetic character
 * @c: The character to check
 *
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c);

/**
 * _abs - computes the absolute value of an integer
 * @n: The integer to compute
 *
 * Return: The absolute value of n
 */
int _abs(int n);

/**
 * _isupper - checks for uppercase character
 * @c: The character to check
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c);

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: The character to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c);

/**
 * _strlen - returns the length of a string
 * @s: The string to calculate the length of
 *
 * Return: The length of the string
 */
int _strlen(char *s);

/**
 * _puts - prints a string to stdout
 * @s: The string to print
 */
void _puts(char *s);

/**
 * _strcpy - copies a string
 * @dest: The destination buffer
 * @src: The source string
 *
 * Return: The destination buffer
 */
char *_strcpy(char *dest, char *src);

/**
 * _atoi - converts a string to an integer
 * @s: The string to convert
 *
 * Return: The integer value of the string
 */
int _atoi(char *s);

/**
 * _strcat - concatenates two strings
 * @dest: The destination string
 * @src: The source string
 *
 * Return: The destination string
 */
char *_strcat(char *dest, char *src);

/**
 * _strncat - concatenates two strings
 * @dest: The destination string
 * @src: The source string
 * @n: The maximum number of bytes to concatenate from src
 *
 * Return: The destination string
 */
char *_strncat(char *dest, char *src, int n);

/**
 * _strncpy - copies a string
 * @dest: The destination buffer
 * @src: The source string
 * @n: The maximum number of bytes to copy from src
 *
 * Return: The destination buffer
 */
char *_strncpy(char *dest, char *src, int n);

/**
 * _strcmp - compares two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: An integer less than, equal to, or greater than zero if s1 is
 * found, respectively, to be less than, to match, or be greater than s2
 */
int _strcmp(char *s1, char *s2);

/**
 * 
 * _memset - fills memory with a constant byte
 * @s: The memory area to fill
 * @b: The byte to fill the memory area with
 * @n: The number of bytes to fill
 * Return: A pointer to the filled memory area @s
*/
char *_memset(char *s, char b, unsigned int n);
/**
 * 
 * _memcpy - copies memory area
 * @dest: The destination memory area
 * @src: The source memory area
 * @n: The number of bytes to copy
 * Return: A pointer to the destination memory area @dest
*/
char *_memcpy(char *dest, char *src, unsigned int n);
/**
 * 
 * _strchr - locates a character in a string
 * @s: The string to search
 * @c: The character to locate
 * Return: A pointer to the first occurrence of the character @c in the
 * string @s, or NULL if the character is not found
*/
char *_strchr(char *s, char c);
/**
 * 
 * _strspn - gets the length of a prefix substring
 * @s: The string to search
 * @accept: The prefix substring
 * Return: The number of bytes in the initial segment of @s which
 * consist only of bytes from @accept
*/
unsigned int _strspn(char *s, char *accept);
/**
 * 
 * _strpbrk - searches a string for any of a set of bytes
 * @s: The string to search
 * @accept: The set of bytes to search for
 * Return: A pointer to the byte in @s that matches one of the bytes
 * in @accept, or NULL if no such byte is found
*/
char *_strpbrk(char *s, char *accept);
/**
 * 
 * _strstr - locates a substring
 * @haystack: The string to search
 * @needle: The substring to search for
 * Return: A pointer to the beginning of the located substring,
 * or NULL if the substring is not found
*/
char *_strstr(char *haystack, char *needle);
#endif /* MAIN_H */
