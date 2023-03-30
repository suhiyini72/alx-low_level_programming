#include <stdio.h>

/* How to use constructors in C language */
void main_constructor(void) __attribute__((constructor));
/**
 * main_constructor - This is the constructor function which prints a message
 * before main runs
 * Return: To nothing
 */
void main_constructor(void)
{
	printf("You're such a beat! and yet, you ought to allow,\n");
	printf("I kept my house on my back!\n");
}
