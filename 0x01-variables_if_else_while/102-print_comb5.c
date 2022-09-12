#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints all possible combinations of 2 2 digits
 * Return: 0
 */
int main(void)
{
	int f_n = 0;
	int s_n;

	while (f_n <= 100)
	{
		f_n = s_n;
		while (s_n <= 100)
		{
			if (s_n != f_n)
			{
				putchar((f_n / 10) + 48);
				putchar((f_n % 10) + 48);
				putchar(' ');
				putchar((s_n / 10) + 48);
				putchar((s_n % 10) + 48);

				if (f_n != 98 || s_n != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
			s_n++;
		}
		f_n++;
	}
	putchar ('\n');
	return (0);
}
