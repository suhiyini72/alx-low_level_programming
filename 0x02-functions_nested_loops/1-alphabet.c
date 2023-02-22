#include "main.h"

/**
 * main - Entry point
 *
 * This program prints alphabets in lowercase fallowed by a new line
 */
void main()
{
char k;
for (k = 'a'; k <= 'z'; k++)
{
_putchar(k);
_putchar("\n");
}
}

/*
#include <main.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 
int _putchar(char _putchar)
{
	return (write(1, &_putchar, 1));
}
*/ 
