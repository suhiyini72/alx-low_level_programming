#include "main.h"

/**
 * flip_bits - This function flips the number of bits needed
 * @n: Refers to bit flips to equal m for n
 * @m: refers to the number to set an equal toi
 * Return: fliped bits number
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int fps = 0;
	unsigned long int xo = (n ^ m);
	unsigned long int mx = 0x01;

	while (mx <= xo)
	{
		if (mx & xo)
			fps++;
		mx <<= 1;
	}
	return (fps);
}
