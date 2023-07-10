#include "main.h"

/**
 * create_file - A function that creates a file
 * @filename: This is a pointer to the file 
 * @text_content: This is a pointer to a string
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
int qt;
int k; 
int z = 0;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
	for (z = 0; text_content[z];)
		z++;
}

qt = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
k = write(qt, text_content, z);

if (qt == -1 || k == -1)
return (-1);

close(qt);

return (1);
}
