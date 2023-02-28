#include "main.h"

/**
 * rev_string - a function that reverses a string with a new line followed
 * @s: the input string
 * Return: Do Nothing
 */

void rev_string(char *s)
{
	int length = 0;
	int k = 0;
	char temp;

	while (s[length] != '\0')
		length++;

	while (k < length--)
	{
		temp = s[k];
		s[k++] = s[length];
		s[length] = temp;
	}
}
