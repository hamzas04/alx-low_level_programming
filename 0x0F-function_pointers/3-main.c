#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - performs simple operations
 * @argc: number of arguments passed to the program
 * @argv: array of arguments passed to the program
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	char *op;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);

	op_func = get_op_func(op);

	if (op_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((op[0] == '/' || op[0] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = op_func(num1, num2);
	printf("%d\n", result);

	return (0);
}
