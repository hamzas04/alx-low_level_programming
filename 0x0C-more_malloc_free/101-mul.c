#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Arguments
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char **argv)
{
	char *num1, *num2;

	if (argc != 3)
	{
		_puts("Error");
		exit(98);
	}

	if (!_isdigit(argv[1]) || !_isdigit(argv[2]))
	{
		_puts("Error");
		exit(98);
	}

	num1 = argv[1];
	num2 = argv[2];

	multiply(num1, num2);

	return (0);
}

int _isdigit(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] < '0' || s[i] > '9')
		{
			return (0);
		}
	}

	return (1);
}

void _puts(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		putchar(s[i]);
	}

	putchar('\n');
}

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		;
	}

	return (i);
}

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i, total_size;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	total_size = nmemb * size;
	ptr = malloc(total_size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < total_size; i++)
	{
		ptr[i] = 0;
	}

	return (ptr);
}

void multiply(char *num1, char *num2)
{
	int len1, len2, i, j, carry, n1, n2, sum;
	int *result;

	len1 = _strlen(num1);
	len2 = _strlen(num2);

	result = _calloc(len1 + len2, sizeof(int));

	for (i = len1 - 1; i >= 0; i--)
	{
	carry = 0;
	n1 = num1[i] - '0';

	for (j = len2 - 1; j >= 0; j--)
	{
		n2 = num2[j] - '0';
		sum = n1 * n2 + result[i + j + 1] + carry;
		carry = sum / 10;
		result[i + j + 1] = sum % 10;
	}

	if (carry > 0)
	{
		result[i + j + 1] += carry;
		carry = 0;
	}
}
