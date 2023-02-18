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
int f, g;
for (f = '0'; f < '9'; f++)
{
for (g = f + 1; g <= '9'; g++)
{
if (g != f)
{
putchar(f);
putchar(g);
if (f == '8' && g == '9')
continue;
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
