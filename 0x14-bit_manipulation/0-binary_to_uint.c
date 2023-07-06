#include "main.h"

/**
 * binary_to_uint -A function that converts a binary number to an unsigned int
 * @b: A string containing the binary number
 * Return: returns the converted number
 */
unsigned int binary_to_uint(const char *b)
{
int z;
unsigned int dval;
dval = 0;

if (!b)
return (0);

for (z = 0; b[z]; z++)
{
if (b[z] < '0' || b[z] > '1')
return (0);
dval = 2 * dval + (b[z] - '0');
}
return (dval);
}
