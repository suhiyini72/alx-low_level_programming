#include "main.h"

/**
 * binary_to_uint: a function that converts a binary number to unsigned int
 * @b: a string that contains the binary number
 * Return: the converted unsigned int
 */

unsigned int binary_to_uint (const char *b)
{
	int z;
	unsigned int n = 0;

	if (!b)
		return (0);

	for (z = 0; b[z]; z++)
	{
		if (b[z] < '0' || b[z] > '1')
			return (0);
		n = 2 * n + (b[z] - '0');
	}
	return (n);
}
