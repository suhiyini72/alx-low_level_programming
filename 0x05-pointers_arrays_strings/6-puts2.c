#include "main.h"

/**
 * puts2 - a function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: An input string
 * Return: Nothing
 */
void puts2(char *str)
{
	int length = 0;
	int k = 0;

	while (str[length] != '\0')
		length++;

	length -= 1;

	for (; k <= length; k += 2)
		_putchar(str[k]);

	_putchar('\n');
}
