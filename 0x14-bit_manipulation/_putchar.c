#include <unistd.h>

/**
 * _putchar - This writes the character C to stdout
 * @c: Refers to the character to print
 * Return: 1 nn successful, else -1 is returned, 
 * while errno is set correctly
 */
int _putchar(char c)
{
  return (write(1, &c, 1));
}
