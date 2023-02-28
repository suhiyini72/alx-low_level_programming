#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * randomValidPasswordGenerator -  a function that generates random password
 * @n: the input password
 * Return: Nothing
 */

void randomValidPasswordGenerator(int n)
{
	int k = 0;

	int ran = 0;

	srand((unsigned int)(time(NULL)));

	char num[] = "0123456789";

	char letters[] = "abcdefghijklmnoqprstuvwyzx";

	char LETTERS[] = "ABCDEFGHIJKLMNOQPRSTUYWVZX";

	char symbols[] = "!@#$^&*?";

	char password[n];

	ran = rand() % 4;

	for (k = 0; k < n; k++) 
	{

		if (ran == 1) 
		{
		password[k] = num[rand() % 10];
		ran = rand() % 4;
		printf("%c", password[k]);
		}
		else if (ran == 2) 
		{
		password[k] = symbols[rand() % 8];
		ran = rand() % 4;
		printf("%c", password[k]);
		}
		else if (ran == 3) 
		{
		password[k] = LETTERS[rand() % 26];
		ran = rand() % 4;
		printf("%c", password[k]);
		}
		else 
		{
		password[i] = letters[rand() % 26];
		ran = rand() % 4;
		printf("%c", password[k]);
        	}
    }
}
