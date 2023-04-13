#include "main.h"
#include <string.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: maximum number of bytes of s2 to concatenate
 *
 * Return: pointer to the newly allocated memory
 * strings, or NULL if the allocation fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len1, len2, len_concat;

	/* Treat NULL strings as empty strings */
	s1 = s1 ? s1 : "";
	s2 = s2 ? s2 : "";

	len1 = strlen(s1);
	len2 = strlen(s2);
	len_concat = (len2 > n) ? (len1 + n) : (len1 + len2);

	concat = malloc(sizeof(char) * (len_concat + 1));
	if (concat == NULL)
		return (NULL);

	memcpy(concat, s1, len1);
	memcpy(concat + len1, s2, (len2 > n) ? n : len2);
	concat[len_concat] = '\0';

	return (concat);
}
