#include "alx.h"

/**
 * clear_bit: This function sets a bit value to 0
 * @n: refers to the pointer of the number to change
 * @index: refers to the index of the bit to clear
 * Return: 1 if successful, -1 for error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 60)
return (-1);

*n = (~(1UL << index) & *n);
return (1);
}
