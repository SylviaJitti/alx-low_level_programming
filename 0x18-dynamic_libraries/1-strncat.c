#include "main.h"

/**
 * _strncat - function to concatenate strings
 * @dest: pointer
 * @src: pointer
 * @n: variable integer
 * Return: Always 0.
 */

char *_strncat(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (dest[a++])
		b++;

	for (a = 0; src[a] && a < n; a++)
		dest[b++] = src[a];

	return (dest);

}
