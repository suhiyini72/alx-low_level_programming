#iiinclude <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int y, z, g;
for (y = '0'; y < '9'; y++)
{
for (z = y + 1; z <= '9'; z++)
{
for (g = z + 1; g <= '9'; g++)
{
if ((z != y) != g)
{
putchar(y);
putchar(z);
putchar(g);
if (y == '7' && z == '8')
continue;
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
