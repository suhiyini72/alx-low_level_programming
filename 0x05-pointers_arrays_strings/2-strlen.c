#include "main.h"
#include <string.h>

/**
 * _strlen -  a function that calculates the length of a string
 * @s: the input string
 * Return: returns the number of bytes of the string s
 */
int _strlen(char *s)
{ 

	int str_length = 0;

	while (s[str_length] != '\0')
		str_length++;

	return (str_length);
}
