#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- A function to read a text file
 * @filename: refers to the text file being read
 * @letters: refers to the number of letters to be read
 * Return: the actual number of bytes read and printed
 *        0 if function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
char *memory;
ssize_t qt;
ssize_t k;
ssize_t z;

qt = open(filename, O_RDONLY);
if (qt == -1)
	return (0);
memory = malloc(sizeof(char) * letters);
z = read(qt, memory, letters);
k = write(STDOUT_FILENO, memory, z);

free(memory);
close(qt);
return (k);
}
