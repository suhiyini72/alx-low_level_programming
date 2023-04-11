#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - This function provides 1024 bytes to a buffer
 * @file: Name of buffer file to store char
 * Return: Name of pointer to the buffer
 */
char *create_buffer(char *file)
{
	char *memory;

	memory = malloc(sizeof(char) * 1024);

	if (memory == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}

	return (memory);
}

/**
 * close_file - This fucntion Closes the file descriptors
 * @fd: The Name of the file descriptor to close
 */
void close_file(int fd)
{
	int k;

	k = close(fd);

	if (k == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - The main function that Copies contents of a file to another file
 * @argc: The number of input arguments the program takes
 * @argv: The array of pointers to the arguments
 *
 * Return: 0 if successful
 *
 * Description: If the count of argument is not correct, then exit code 97.
 *              If file_from is not in existence/readable, then exit code 98.
 *              If file_to is not creatable/writable to, then exit code 99.
 *              If file_to or file_from is not closable, then exit code 100.
 */

int main(int argc, char *argv[])
{
int from;
int to;
int r;
int w;
char *memory;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

memory = create_buffer(argv[2]);
from = open(argv[1], O_RDONLY);
r = read(from, memory, 1024);
to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

do {
if (from == -1 || r == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
free(memory);
exit(98);
}

w = write(to, memory, r);
if (to == -1 || w == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
free(memory);
exit(99);
}
r = read(from, memory, 1024);
to = open(argv[2], O_WRONLY | O_APPEND);
} while (r > 0);

free(memory);
close_file(from);
close_file(to);
return (0);
}
