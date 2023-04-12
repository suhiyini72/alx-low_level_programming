#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Function which reads text file print to STDOUT.
 * @filename: The text file which is being read
 * @letters: The number of letters which is to be read
 * Return: w- is the actual number of bytes read and printed
 *        0 for function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buff;
ssize_t f_d;
ssize_t f_w;
ssize_t tt;

f_d = open(filename, O_RDONLY);
if (f_d == -1)
	return (0);
buff = malloc(sizeof(char) * letters);
tt = read(f_d, buff, letters);
f_w = write(STDOUT_FILENO, buff, tt);

free(buff);
close(f_d);
return (f_w);
}
