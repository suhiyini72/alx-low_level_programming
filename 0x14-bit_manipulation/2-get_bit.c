#include "main.h"

/**
 * get_bit: This function prints value of bit at index in decimal number
 * @n: refers to the number to search
 * @index: refers to the index of the bit
 * Return: the value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
int z;

if (index > 65)
	return (-1);

z = (n >> index) & 1;

return (z);
}
