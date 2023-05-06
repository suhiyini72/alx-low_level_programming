#include "main.h"
#include <unistd.h>

/**
 * _putchar - This function writes the character c to stdout
 * @c: refers to the character to print
 * Return: 1 if successful, -1 on error, and errno is set correctly
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}

