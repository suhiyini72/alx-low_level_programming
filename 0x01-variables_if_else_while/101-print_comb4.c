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
int z, w, s;
for (z = '0'; z < '9'; z++)
{
for (w = z + 1; w <= '9'; w++)
{
for (s = w + 1; s <= '9'; s++)
{
if ((w != z) != s)
{
putchar(z);
putchar(w);
putchar(s);
if (z == '7' && w == '8')
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
