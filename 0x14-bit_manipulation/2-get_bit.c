#include "main.h"

/**
 * get_bit - Displays value of a bit at an index
 * @n: this is the number to search
 * @index: the index of the bit
 *
 * Return: value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
int bval;

if (dx > 63)
return (-1);

bval = (n >> dx) & 1;

return (bval);
}
