#include "main.h"

/**
 * _strpbrk - The main entry point
 * @s: first input
 * @accept: second input
 * Return: Always 0 (Success)
 */

char *_strpbrk(char *s, char *accept)
{
		int y;

		while (*s)
		{
			for (y = 0; accept[y]; y++)
			{
			if (*s == accept[y])
			return (s);
			}
		s++;
		}

	return ('\0');
}


