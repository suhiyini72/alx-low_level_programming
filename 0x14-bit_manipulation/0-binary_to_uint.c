#include "main.h"

/**
 * binary_to_uint: This function converts a binary number to unsigned int
 * @b: refers to the string that contains the binary number
 * Return: the converted decimal number
 */

unsigned int binary_to_uint(const char *b)
{
int k;
unsigned int dval = 0;

if (!b)
	return (0);

for (k = 0; b[k]; k++)
{
	if (b[k] < '0' || b[k] > '1')
		return (0);
		dval = 2 * dval + (b[k] - '0');
}
return (dval);
}
