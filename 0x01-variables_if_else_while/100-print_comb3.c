#include <stdio.h>
/**
 * main - program that prints all possible different combinatins of 2 digits
 * Return: 0
 */
int main(void)
{
	int x = 0;
	int f_n;
	int l_n;

	while (x <= 99)
	{
		f_n = (x / 10 + '0');
		l_n = (x % 10 + '0');

		if (f_n < l_n)
		{
			putchar(f_n);
			putchar(l_n);

			if (x != 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
		x++;
	}
putchar('\n');
return (0);
}
