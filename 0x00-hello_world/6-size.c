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

	printf("Size of a char: %ld byte(s)\n", sizeof(c));
	printf("Size of an int: %ld byte(s)\n", sizeof(d));
	printf("Size of a long int: %ld bytes(s)\n", sizeof(e));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(f));
	printf("Size of a float: %ld byte(s)\n", sizeof(g));
	return (0);
}
