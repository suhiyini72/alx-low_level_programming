#include "main.h"

/**
 * set_bit: This function sets a bit to 1 with a given index
 * @n: refers to the pointer of the number to change
 * @index: refers to the index of the bit to set to 1
 * Return: 1 if successful, -1 on failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 60)
return (-1);

*n = ((1UL << index) | *n);
return (1);
}
