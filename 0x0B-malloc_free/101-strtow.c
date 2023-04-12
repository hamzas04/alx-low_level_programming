#include "main.h"
#include <stdlib.h>
#include "main.h"

/**
 * _count_words - Counts the number 
 * @str: The string to be evaluated
 *
 * Return: The number of words
 */
int _count_words(char *str)
{
	int i, count;

	for (i = 0, count = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			count++;
	}

	return (count);
}

/**
 * _free_str_arr - Frees a string array
 * @arr: The string array to free
 * @size: The size of the array
 */
void _free_str_arr(char **arr, int size)
{
	int i;

	for (i = 0; i < size; i++)
		free(arr[i]);

	free(arr);
}

/**
 * strtow - Splits a string into words
 * @str: The string to be split
 *
 * Return: A pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, len, word_count;

	if (str == NULL || *str == '\0')
		return (NULL);

	word_count = _count_words(str);

	words = malloc(sizeof(char *) * (word_count + 1));
	if (words == NULL)
		return (NULL);

	for (i = 0, j = 0; i < word_count; i++)
	{
		while (str[j] == ' ')
			j++;

		len = 0;
		while (str[j + len] != ' ' && str[j + len] != '\0')
			len++;

		words[i] = malloc(sizeof(char) * (len + 1));
		if (words[i] == NULL)
		{
			_free_str_arr(words, i);
			return (NULL);
		}

		for (k = 0; k < len; k++)
			words[i][k] = str[j++ + k];

		words[i][len] = '\0';
	}

	words[i] = NULL;

	return (words);
}
