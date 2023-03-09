#include "main.h"

/**
 * _strncat - a function that concatenate two strings
 * using at most n bytes from src
 * @dest: first input value
 * @src: second input value
 * @n: third input value
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int x;
	int y;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	y = 0;
	while (y < n && src[y] != '\0')
	{
	dest[x] = src[y];
	x++;
	y++;
	}
	dest[x] = '\0';
	return (dest);
}