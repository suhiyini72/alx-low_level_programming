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
char lower, val, vel;
val = 'val';
vel = 'vel';
for (lower = 'a'; lower <= 'z'; lower++)
{
if (lower != val && lower != vel)
putchar(lower);
}
putchar('\n');
return (0);
}
