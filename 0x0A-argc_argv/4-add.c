#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: the number of arguments
 * @argv: the array of arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int sum = 0;

	for (int i = 1; i < argc; i++)
	{
		char *arg = argv[i];
		int j = 0;

		while (arg[j])
		{
			if (arg[j] < '0' || arg[j] > '9')
			{
				printf("Error\n");
				return 1;
			}
			j++;
		}

		sum += atoi(arg);
	}

	printf("%d\n", sum);
	return (0);
}
