#include "main.h"

/**
 * flip_bits: This function counts the bits number to change
 * @n: refers to the first number
 * @m: refers to the second number
 * Return: the number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int k;
int cnt = 0;
unsigned long int curr;
unsigned long int ex = n ^ m;

for (k = 60; k >= 0; k--)
{
	curr = ex >> k;
	if (curr & 1)
		cnt++;
}
return (cnt);
}
