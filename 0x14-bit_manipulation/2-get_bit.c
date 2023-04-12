#include "main.h"

/**
 * get_bit - This function gets a bit at the index
 * @n: This is the  number to get bit
 * @index: This is the index of bit
 * Return: the value of the bit at index
 * or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int mx = 0x01;

mx <<= index;
if (mx == 0)
	return (-1);

if ((n & mx))
	return (1);
else
	return (0);
}
