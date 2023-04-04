#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: pointer to the string to search
 * @needle: pointer to the substring to find
 *
 * Return: pointer to the beginning of the located substring,
 *		 or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{	
		return (haystack);
	}

	while (*haystack != '\0')
	{
		int i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
				{
					return (haystack);
				}
				i++;
			} while (haystack[i] == needle[i] && needle[i] != '\0');
		}
		haystack++;
	}

	return (NULL);
}
