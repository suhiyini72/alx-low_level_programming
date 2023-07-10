#include "main.h"

/**
 * append_text_to_file - A function that appends text at the end of a file
 * @filename: refers to a pointer to the name of the file
 * @text_content: refers to the  string to add to the end of the file
 * Return: 1 on success and -1 on failure
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
int x;
int y;
int z = 0;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
	for (z = 0; text_content[z];)
		z++;
}

x = open(filename, O_WRONLY | O_APPEND);
y = write(x, text_content, z);

if (x == -1 || y == -1)
return (-1);

close(x);

return (1);
}
