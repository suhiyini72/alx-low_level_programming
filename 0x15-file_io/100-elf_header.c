#include <stdio.h>

/**
 * main: The main function to get header of ELF file
 * @argc: Refers to the argument number
 * @argv: Refers to the pointer to array of arguments
 * Return: 1 if successful, else error code of failure
 */

int main(int argc, char *argv[])
{
	printf("argc:%d, argv:%p\n", argc, (void *)*argv);
	return (1);
}
