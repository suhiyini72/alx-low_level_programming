#include <stdio.h>

/**
 * _atoi - a function that converts string to integer
 * @s: An input string
 * Return: integer from conversion
 */
int _atoi(char *s)
{
	int k = 1;
	unsigned int sum = 0;
	char null_flag = 0;

	while (*s)
	{
		if (*s == '-')
			k *= -1;

		if (*s >= '0' && *s <= '9')
		{
			null_flag = 1;
			sum = sum * 10 + *s - '0';
		}

		else if (null_flag)
			break;
		s++;
	}

	if (k < 0)
		sum = (-sum);

	return (sum);
}
