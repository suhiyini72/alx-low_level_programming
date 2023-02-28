#include "main.h"

/**
 * puts_half - a function that prints half of a string, followed by a new line.
 * @str: An input string
 * Return: Nothing
 */
void puts_half(char *str)
{
	int length = 0;

	int k;

	int y;

	while (str[length] != '\0')
		length++;

	if (length % 2 == 0)
		y = length / 2;

	else
		k = (length + 1) / 2;

	for (k = y; k < length; k++)
		_putchar(str[k]);

	_putchar('\n');
}
