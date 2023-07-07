#include "main.h"

/**
 * flip_bits - this function counts the number of bits to change
 * to get from one number to another
 * @n: this refers to the first number
 * @m: this refers to the second number
 *
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int z;
int cnt = 0;
unsigned long int present;
unsigned long int xclu;
xclu = n ^ m;

for (z = 63; z >= 0; z--)
{
present = xclu >> z;
if (present & 1)
cnt++;
}
return (cnt);
}
