#include <stdio.h>
#include <stdlib.h>

/**
 * Adds positive numbers given as command-line arguments.
 *
 * @param argc The number of command-line arguments.
 * @param argv An array of command-line argument strings.
 *
 * @returns 0 if successful, 1 if there is an error.
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		int arg_value = atoi(argv[i]);

		if (arg_value <= 0)
		{
			printf("Error\n");
			return (1);
		}

		sum += arg_value;
	}

	printf("Sum: %d\n", sum);

	return (0);
}
