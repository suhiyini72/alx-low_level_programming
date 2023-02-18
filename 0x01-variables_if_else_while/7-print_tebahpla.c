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
char sm;
for (sm = 'z'; sm >= 'a'; sm--)
putchar(sm);
putchar('\n');
return (0);
}
