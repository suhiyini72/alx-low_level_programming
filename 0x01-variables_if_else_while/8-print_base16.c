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
int f;
char lw;
for (f = '0'; f <= '9'; f++)
putchar(f);
for (lw = 'a'; lw <= 'f'; lw++)
putchar(lw);
putchar('\n');
return (0);
}
