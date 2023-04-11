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
    int sum = 0;  // initialize sum to 0

    // iterate through all arguments, starting at index 1
    for (int i = 1; i < argc; i++)
    {
        // check if the current argument is a positive integer
        for (char *p = argv[i]; *p; p++)
        {
            if (!isdigit(*p))
            {
                printf("Error\n");  // print error message
                return 1;          // exit with error status
            }
        }

        // convert the current argument to an integer and add it to the sum
        sum += atoi(argv[i]);
    }

    // print the sum and exit with success status
    printf("%d\n", sum);
    return 0;
}
