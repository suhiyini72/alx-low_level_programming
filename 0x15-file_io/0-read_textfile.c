#include "main.h"
#include <stdlib.h>

/**
 * read_textfile: This function reads text file and prints to STDOUT
 * @filename: Name of text file to be read
 * @letters: The number of letters to be read
 * Return: The number of bytes to be read and printed
 *        otherwise 0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buff;
ssize_t op;
ssize_t wr;
ssize_t k;

op = open(filename, O_RDONLY);
if (op == -1)
return (0);
buff = malloc(sizeof(char) * letters);
k = read(op, buff, letters);
wr = write(STDOUT_FILENO, buff, k);

free(buff);
close(op);
return (wr);
}
