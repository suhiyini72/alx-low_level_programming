#include "main.h"

/**
 * string_toupper - a function that changes all lowercase to uppercase
 * @n: the pointer
 *
 * Return: n
 */

char *string_toupper(char *n)
{
	int k = 0;

	while (n[k] != '\0')
	{
		if (n[k] >= 'a' && n[k] <= 'z')
			n[k] = n[k] - 32;
		k++;
	}
	return (n);
}


