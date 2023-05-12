#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <sys/uio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer: Allocates 1024 bytes for a buffer
 * @file: This is the  name of the file buffer to store chars
 * Return: a pointer to the asigned buffer
 */

char *create_buffer(char *file)
{
char *buff;

buff = malloc(sizeof(char) * 1024);

if (buff == NULL)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
	exit(99);
}
return (buff);
}

/**
 * close_file: Closes file descriptors
 * @fd: This is the file descriptor to close
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
 * main: Copies the contents of a file to another file
 * @argc: This is the number of arguments passed to the program
 * @argv: This is the  array of pointers to the arguments
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect, exit with code 97.
 *              If file_from do not exist or cannot be read, exit with code 98.
 *              If file_to cannot be created or written to, exit with code 99.
 *              If file_to or file_from cannot be closed, exit with code 100.
 */

int main(int argc, char *argv[])
{
int ff;
int ft;
int fr;
int fw;
char *buff;

if (argc != 3)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}

buff = create_buffer(argv[2]);
ff = open(argv[1], O_RDONLY);
fr = read(ff, buff, 1024);
ft = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

do {
	if (ff == -1 || fr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		free(buff);
		exit(98);
	}

	fw = write(ft, buff, fr);
	if (ft == -1 || fw == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		free(buff);
		exit(99);
	}

	fr = read(ff, buff, 1024);
	ft = open(argv[2], O_WRONLY | O_APPEND);

} while (fr > 0);

free(buff);
close_file(ff);
close_file(ft);

return (0);
}
