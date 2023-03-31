#include "main.h"
/**
 * leet - encodes a string into 1337
 * @str: pointer to the string to encode
 *
 * Return: a pointer to the encoded string
 */
char *leet(char *str)
{
	char *s = str;
	char *leet_chars = "aAeEoOtTlL";
	char *leet_nums = "4433007711";
	int i, j;

	while (*s != '\0')
	{
		i = 0;
		while (leet_chars[i] != '\0')
		{
			if (*s == leet_chars[i])
			{
				*s = leet_nums[i];
				break;
			}
			i++;
		}
		s++;
	}

	return (str);
}
