#include "main.h"

/**
 * binary_to_uint: Function that converts binary number to unsigned int
 * @b: binary string pointing to 0 and 1 chars
 * Return: The converted unsigned int(decimal)
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int num;
unsigned int k;

for (num = 0, k = 0; b[k] != '\0'; k++)
{
	if (b[k] == '1')
	num = (num << 1) | 1;
	else if (b[k] == '0')
	num <<= 1;
	else if (b[k] != '0' && b[k] != '1')
	return (0);
}
return (num);
}
