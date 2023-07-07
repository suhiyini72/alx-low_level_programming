#include "main.h"

/**
 * get_endianness - function checks if a machine is little or big endian
 * Return: 0 if big, otherwise 1 for little
 */

int get_endianness(void)
{
unsigned int z = 1;
char *c = (char *) &z;

return (*c);
}
