#include <stdio.h>

/**
 * main - This is the main entry point to program
 * @argc: Refers to the number of arguments
 * @argv: Refers to the pointer to an array of arguments
 * Return: Returns 1 if successful, else error code upon failure
 */

int main(int argc, char *argv[])
{
printf("argc:%d, argv:%p\n", argc, (void *)*argv);
return (1);
}
