#include "main.h"

/**
 * binary_to_uint - A function which converts a binary number to unsigned int
 * @b: The string which contains the binary number
 *
 * Return: the converted number, or 0 if
 */
unsigned int binary_to_uint(const char *b)
{
int k;
unsigned int d_value = 0;

if (!b)
	return (0);

for (k = 0; b[k]; k++)
{
if (b[k] < '0' || b[k] > '1')
	return (0);
d_value = 2 * d_value + (b[k] - '0');
}

return (d_value);
}

