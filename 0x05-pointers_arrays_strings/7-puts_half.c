#include "main.h"

/**
 * puts_half - a function that prints half of a string, followed by a new line.
 * @str: the input string
 * Return: Do Nothing
 */
void puts_half(char *str)
{
	int length = 0;
	int k = n;

	while (str[length] != '\0')
		length++;

	if (length % 2 == 0)
		n = length / 2;

	else
		n = (length + 1) / 2;

	for (k = n; k < length; k++)
		_putchar(str[k]);

	_putchar('\n');
}
