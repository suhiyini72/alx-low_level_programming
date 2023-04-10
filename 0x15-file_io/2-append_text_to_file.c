#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * append_text_to_file - This function appends text to the end of the file
 * @filename: Refers to the filename to open as well as append to
 * @text_content: A terminated NULL string to be added
 * Return: 1 if successful, and -1 if file creation or write fail
 */

int append_text_to_file(const char *filename, char *text_content)
{
int fd_open, fd_write, length = 0;

if (filename == NULL)
	return (-1);

fd_open = open(filename, O_RDWR | O_APPEND);
if (fd_open < 0)
	return (-1);
if (text_content == NULL)
{
	close(fd_open);
	return (1);
}

while (*(text_content + length))
	length++;

fd_write = write(fd_open, text_content, length);
	close(fd_open);
if (fd_write < 0)
	return (-1);

	return (1);
}
