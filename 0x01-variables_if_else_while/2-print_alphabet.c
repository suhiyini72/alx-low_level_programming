#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char lowCase;
for (lowCase = 'a'; lowCase <= 'z'; lowCase++)
putchar(lowCase);
putchar('\n');
return (0);
}
