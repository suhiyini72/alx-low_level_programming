#include "main.h"

/**
 * _strncpy - a function to copy a string
 * @dest: first input value
 * @src: second input value
 * @n: third input value
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int k = 0;

	while (k < n && src[k] != '\0')
	{
		dest[k] = src[k];
		k++;
	}
	while (k < n)
	{
		dest[k] = '\0';
		k++;
	}

	return (dest);
}
