#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile: A function that reads a text file and print to STDOUT
 * @filename: The text file name that is being read
 * @letters: The number of letters to to be read
 * Return: The actual number of bytes it could read and print to STDOUT
 * 0 if filename is NULL, or function failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *m;
	int fx, fy, fz;

	if (filename == NULL)
		return (0);

	m = malloc(sizeof(char) * letters);

	if (m == NULL)
		return (0);

	fx = open(filename, O_RDONLY);

	if (fx < 0)
	{
		free(m);
		return (0);
	}

	fy = read(fx, m, letters);

	if (fy < 0)
	{
		free(m);
		return (0);
	}

	fz = write(STDOUT_FILENO, m, fy);
		free(m);
		close(fx);

	if (fz < 0)

	return (0);
	return ((ssize_t)fz);
	return (0);
}
