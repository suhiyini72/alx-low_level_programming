#include "main.h"

/**
 * set_bit - This function sets the bits at index 1
 * @n: Represents the number to set the bits
 * @index: Represents the index to set the bits
 * Return: 1 if successful, else -1 if error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mx = 0x01;

mx <<= index;
if (mx == 0)
	return (-1);
*n |= mx;
return (1);
}
