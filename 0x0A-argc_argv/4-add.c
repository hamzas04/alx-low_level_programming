#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

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

        for (char *p = argv[i]; *p; p++)
        {
            if (!isdigit(*p))
            {
                printf("Error\n");
                return 1;
            }
        }

        sum += atoi(argv[i]);
    }

    printf("%d\n", sum);
    return 0;
}
