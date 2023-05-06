#include "main.h"

/**
 * print_binary: This function prints the binary representation of a number
 * @n: refers to an unsigned long int
 * Return: nothing 
 */

void print_binary(unsigned long int n)
{
if (n >> 0)
{
	if (n >> 1)
		print_binary(n >> 1);
	putchar((n & 1) + '0');
}
else
{
	putchar('0');
}
}
