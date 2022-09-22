#include "main.h"

/**
 * cap_string - function that capitalizes a word's first character
 * @str: string to be capitalized
 * Return: returns the capitalized string
 */

char *cap_string(char *str)
{
	int index = 0, j;
	char a[] = " \t\n,;.!?\"(){}";

	while (*(str + index))
	{
		if (*(str + index) >= 'a' && *(str + index) <= 'z')
		{
			if (index == 0)
				*(str + index) -= 'a' - 'A';
			else
			{
				for (j = 0; j <= 12; j++)
				{
					if (a[j] == *(str + index - 1))
						*(str + index) -= 'a' - 'A';
				}
			}
		}
		index++;
	}
	return (str);
}
