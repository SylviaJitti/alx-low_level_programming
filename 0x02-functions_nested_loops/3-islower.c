#include "main.h"
/**
 * _islower - function that checks for a lowercase character
 * @c: is the int that we will use for the argument of the function
 * Retuen: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
