#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: pointer to the string
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
    char len[] = *s;
    int i = 0;

    while (len[i] != '\0')
    {
        i++;
    }

    return i;
}
