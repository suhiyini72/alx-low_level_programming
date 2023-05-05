#include "main.h"

/**
 * binary_to_uint: a function that converts a binary number to unsigned int
 * @b: a string that contains the binary number
 * Return: the coverted integer
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int v;
int dec;
int two;

if (!b)
	return (0);

v = 0;

for (dec = 0; b[dec] != '\0'; dec++)
	;

for (dec--, two = 1; dec >= 0; dec--, two *= 2)
{
if (b[dec] != '0' && b[dec] != '1')
{
return (0);
}

if (b[dec] & 1)
{
v += two;
		}
}
return (v);
}
