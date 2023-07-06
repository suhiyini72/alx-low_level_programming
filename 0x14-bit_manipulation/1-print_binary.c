#include "main.h"

/**
 * print_binary - A function to print binary equivalent of decimal number
 * @n: This is the number to print in binary
 */

void print_binary(unsigned long int n)
{
int z;
int cnt = 0;
unsigned long int present;

for (z = 63; z >= 0; z--)
{
present = n >> z;

if (present & 1)
{
_putchar('1');
cnt++;
}
else if (cnt)
_putchar('0');
}
if (!cnt)
_putchar('0');
}
