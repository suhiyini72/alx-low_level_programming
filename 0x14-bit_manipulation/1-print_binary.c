#include "main.h"

/**
 * print_binary - This function prints a binary number excluding % or /
 * @n: Refers to the number to be printed
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
unsigned int fg = 0;
unsigned int mx = 32768;

if (n == 0)
{
_putchar('0');
	return (0);
}
while (mx)
{
if (fg == 1 && (n & mx) == 0)
	_putchar('0');
else if ((n & mx) != 0)
{
	_putchar('1');
fg = 1;
}
mx >>= 1;
}
}
