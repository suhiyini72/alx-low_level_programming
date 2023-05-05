#include "main.h"

/**
 * print_binary: This function converts a decimal number to a binary
 * @n: refers to the number to print in binary
 */

void print_binary(unsigned long int n)
{
int k;
cnt = 0;
unsigned long int curr;

for (k = 63; k >= 0; k--)
{
	curr = n >> k;
	if (curr & 1)
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
