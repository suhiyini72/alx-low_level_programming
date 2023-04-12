#include "main.h"

/**
 * get_endianness - This function checks endianness
 * Return: 0 on max endian, 1 on min endian
 */

int get_endianness(void)
{
unsigned int k = 1;
char *c = (char *)&k;

if (*c)
	return (1);
	return (0);
}
