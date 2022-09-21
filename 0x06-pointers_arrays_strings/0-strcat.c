#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: String that will be appended
 * @src: String to be concatenated
 * Return: returns pointer to @dest
 */

char *_strcat(char *dest, char *src)
{

	int index = 0, dest_len = 0;

	while (*(dest + index) != '\0')
	{
		index++;
	}

	while (dest_len >= 0)
	{
		*(dest + index) = *(src + dest_len);
		if (*(src + dest_len) == '\0')
			break;
		index++;
		dest_len++;
	}
	return (dest);
}
