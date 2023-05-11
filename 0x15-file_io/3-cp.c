#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <sys/uio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main: The main function to copy files
 * @argc: Arguments number that are passed
 * @argv: Refers to pointers of array arguments
 * Return: 1 if successful, otherwise exits on failure
 *
 * Description: if incorrect argument count - exit code 97
 * 	if file_from does not exist, or if you can not read it, exit with code 98
 * 	if file_to cannot be created or written to, exit with code 99
 * 	if file_to or file_from cannot be closed, exit with code 100
 */

int s_klose(int);

int main(int argc, char *argv[])
{
char memory[1024];
int br = 0;
int _EOF = 1;

int f_fd = -1;
int t_fd = -1;
int err = 0;

if (argc != 3)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}

f_fd = open(argv[1], O_RDONLY);
if (f_fd < 0)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
}

t_fd = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
if (t_fd < 0)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	s_klose(f_fd);
	exit(99);
}

while (_EOF)
{
	_EOF = read(f_fd, memory, 1024);
	if (_EOF < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		s_klose(f_fd);
		s_klose(t_fd);
		exit(98);
	}
	else if (_EOF == 0)
		break;
	br += _EOF;
	err = write(t_fd, memory, _EOF);
	if (err < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		s_klose(f_fd);
		s_klose(t_fd);
		exit(99);
	}
}
err = s_klose(t_fd);
if (err < 0)
{
	s_klose(f_fd);
	exit(100);
}
err = s_klose(f_fd);
if (err < 0)
	exit(100);
return (0);
}

/**
 * s_klose: This function closes a file and prints an error upon closure
 * @description: This describes an error for closed file
 * Return: 1 if successful, else -1 on failure
 */

int s_klose(int description)
{
	int err;

	err = close(description);
	if (err < 0)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", description);
	return (err);
}
