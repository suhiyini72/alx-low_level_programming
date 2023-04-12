#include "main.h"

/**
 * clear_bit - This function sets the bit to 0 at index
 * @n: Refers to the number to set bit 
 * @index: Refers to the index to set bit to
 * Return: 1 if successful, else -1 on failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mx = 0x01;

mx = ~(mx << index);
if (mx == 0x00)
	return (-1);
*n &= mx;
	return (1);
}
