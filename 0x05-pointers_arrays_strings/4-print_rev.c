#include "main.h"

/**
 * print_rev - a function that prints in reverse form
 * @s: the input string argument
 * return: nothing
 */

void print_rev(char *s)
{
	int k = 0;

	while (s[k] != '\0')
		k++;

	while (k)
		_putchar(s[--k]);

	_putchar('\n');
}
