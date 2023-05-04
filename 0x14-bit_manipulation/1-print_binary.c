#include <stdio.h>
#include "main.h"

/**
 * print_binary: A function that prints a decimal as binary
 * @n: A long integer
 */

void print_binary(unsigned long int n)
{
unsigned long int bit;
bit = 1UL << (sizeof(unsigned long int) * 8 - 1);
int k;
for (k = 0; k < sizeof(unsigned long int) * 8; k++)
{
putchar ((n & bit) ? '1' : '0');
bit >>= 1;
}
}
