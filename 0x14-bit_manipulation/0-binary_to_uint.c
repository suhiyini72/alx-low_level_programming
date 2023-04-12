#include "main.h"

/**
 * binary_to_uint - Function: It converts a binary number to an unsigned integer
 * @b: Name of pointer to binary string
 * Return: type - an unsigned integer
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int root = 1;
unsigned int answer = 0;
unsigned int ln = 0;

if (b == NULL)
	return (0);

while (b[ln])
	ln++;

while (ln)
{
if (b[ln - 1] != '0' && b[ln - 1] != '1')
	return (0);

if (b[ln - 1] == '1')
	answer += root;
	root *= 2;
	ln--;
}
return (answer);
}
