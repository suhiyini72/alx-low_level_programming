#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0
*/

int main(void)
{
int z, w;
for (z = 0; z <= 98; z++)
{
for (w = z + 1; w <= 99; w++)
{
putchar((z / 10) + '0');
putchar((z % 10) + '0');
putchar(' ');
putchar((w / 10) + '0');
putchar((w % 10) + '0');
if (z == 98 && w == 99)
continue;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
