#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int pw[100];

	int k;	
	int sum;

	int n;
	sum = 0;	
	
	srand(time(NULL));
	
	for (k = 0; k < 100; k++)
	{
		pw[k] = rand() % 78;
		sum += (pw[k] + '0');
		putchar(pw[k] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
	}

	return (0);
}

