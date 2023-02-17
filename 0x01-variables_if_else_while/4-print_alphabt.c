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
char lower, x, y;
x = 'x';
y = 'y';
for (lower = 'a'; lower <= 'z'; lower++)
{
if (lower != x && lower != y)
putchar(lower);
}
putchar('\n');
return (0);
}
