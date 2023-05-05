#include "main.h"

/**
 * get_bit: This function returns a bit value using index in a decimal number
 * @n: refers to the number to search
 * @index: refers to the index of the bit
 * Return: the value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
int bval;

if (index > 63)
return (-1);

bval = (n >> index) & 1;
return (bval);
}
