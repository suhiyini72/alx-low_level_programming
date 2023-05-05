#include "main.h"

/**
 * get_endianness: This function checks for little or big endian machine
 * Return: 0 if big endian, other 1 for little endian
 */

int get_endianness(void)
{
unsigned int k = 1;
char *y = (char *) &k;
return (*y);
}
