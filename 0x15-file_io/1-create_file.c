#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * create_file - This function creates a file
 * @filename: The name of the file to be created
 * @text_content: Refers to a terminated string (NULL) to write to filename
 * Return: returns 1 if successful and -1 for failure to create the file/write
 */

int create_file(const char *filename, char *text_content)
{
int fd_open, fd_write, length = 0;

if (filename == NULL)
	return (-1);

fd_open = open(filename, O_RDWR | O_CREATE | O_TRUNC, 0600);
if (fd_open < 0)
	return (-1);

while (text_content && *(text_content + length))
	length++;

fd_write = write(fd_open, text_content, length);
close(fd_open);
if (fd_write < 0)
	return (-1);
	return (1);
}
