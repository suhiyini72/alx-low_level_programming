#include "main.h"

/**
 * _puts - a function that prints a string, followed by a new line, to stdout
 * @str: the input string to be printed
 * Return: str
 */
void _puts(char *str)
{
	int k = 0;

	while (str[k] != '\0')
	{
		_putchar(str[k]);
		k++;
	}
	_putchar('\n');
}
