#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - This function reads/prints a text file to POSIX stdout
 * @filename: This refers to the filename to be opened
 * @letters: This refers to the numbers of letters to be printed
 * Return: This returns the letters else 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd_open, fd_read, fd_write;
char *buffer;

if (filename == NULL)
	return (0);

buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
	return (0);

fd_open = open(filename, O_RDONLY);
if (fd_open < 0)
{
	free(buffer);
	return (0);
}

fd_read = read(fd_open, buffer, letters);
if (fd_read < 0)
{
	free(buffer);
	return (0);
}

fd_write = write(STDOUT_FILENO, buffer, fd_read);
free(buffer);
close(fd_open);

if (fd_write < 0)
	return (0);
	return ((ssize_t)fd_write);
}
