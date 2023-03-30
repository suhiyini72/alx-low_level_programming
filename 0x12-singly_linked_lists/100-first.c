#include <stdio.h>

/* How to Use constructors in C! Who knew!? */
void main_constructor(void) __attribute__((constructor));
/**
 * main_constructor - constructor function that runs before main ()
 *
 * Return: always void
 */
void main_constructor(void)
{
	printf("You're such a beat! and yet, you ought to allow,\n");
	printf("I put my house on my back!\n");
}
