#include <stdio.h>
/**
 * main - a program that prints all possible combinations of 3 digit numbers.
 * Return: 0
 */
int main(void)
{
	int x = 0;
	int f_n;
	int m_n;
	int l_n;

	while (x <= 999)
	{
		if_n = (x / 100 + '0');
		m_n = (x / 10 % 10 + '0');
		l_n = (x % 10 + '0');

		if ((f_n < m_n) && (m_n < l_n))
		{
			putchar(f_n);
			putchar(m_n);
			putchar(l_n);

			if (x != 789)
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
