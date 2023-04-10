#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

int safe_close(int);
/**
 * main - This is the main function that copies the files
 * @argc: Refers to the number of arguments passed
 * @argv: Refers to the pointers of the array arguments
 * Return: return 1 if successful else exit on failure
 */

int main(int argc, char *argv[])
{
char buf[1024];
int read_bytes = 0, _EOF = 1, from_fd = -1, to_fd = -1, error = 0;

if (argc != 3)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}

from_fd = open(argv[1], O_RDONLY);
if (from_fd < 0)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
}

to_fd = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
if (to_fd < 0)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	safe_close(from_fd);
	exit(99);
}

while (_EOF)
{
	_EOF = read(from_fd, buf, 1024);
	if (_EOF < 0)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	safe_close(from_fd);
	safe_close(to_fd);
	exit(98);
}
else if (_EOF == 0)
	break;
	read_byte += _EOF;
	error = write(to_fd, buf, _EOF);
if (error < 0)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	safe_close(from_fd);
	safe_close(to_fd);
	exit(99);
}
}
error = safe_close(to_fd);
if (error < 0)
{
safe_close(from_fd);
exit(100);
}
error = safe_close(from_fd);
if (error < 0)
exit(100);
return (0);
}

/**
 * safe_close - This is a function which closes a file
 * @description: This describes the error for a closed file
 * Return: Return 1 if successful else -1 upon failure
 */

int safe_close(int description)
{
int error;

error = close(description);
if (error < 0)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", description);
	return (error);
}
