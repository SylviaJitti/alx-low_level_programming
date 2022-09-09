#include <stdio.h>

/**
 *main - Entry point
 *
 *Description: prints the sizes of various data type
 * 
 *Return: Always 0 (Success)
 *
 */

int main(void)
{
	char c;
	int d;
	long e;
	long long f;
	float g;

	printf("Size of a char: %d byte(s)\n", (int)sizeof(c));
	printf("Size of an int: %d byte(s)\n", (int)sizeof(d));
	printf("Size of a long int: %d bytes(s)\n", (int)sizeof(e));
	printf("Size of a long long int: %d byte(s)\n", (int)sizeof(f));
	printf("Size of a float: %d byte(s)\n", (int)sizeof(g));
	return (0);
}
