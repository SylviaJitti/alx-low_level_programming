#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - program that prints all possible combinations of 2 2 digits
 * Return: Always Success
 */
int main(void)
{
	int f_n;
	int s_n;

	for (f_n = 0; f_n <= 98; f_n++)

	{
	
	for (s_n = f_n + 1; s_n <= 99; s_n++)
	
	{

		putchar((f_n / 10) + '0');
		putchar((f_n % 10) + '0');
		putchar(' ');
		putchar((s_n / 10) + '0');
		putchar((s_n % 10) + '0');

		if (f_n == 98 && s_n == 99)

		continue;
		putchar(',');
		putchar(' ');
	}

	}

putchar ('\n');
return (0);
}
