#include <stdio.h>

#define ABS(x) ((x) < 0 ? -(x) : (x))

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void) {
	int x = -10;
	int abs_x = ABS(x);
	printf("%d, %d\n", x, abs_x);
	return 0;
}
