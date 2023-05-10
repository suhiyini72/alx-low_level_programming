#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <sys/uio.h>
#include <fcntl.h>
#include "main.h"

/**
 * append_text_to_file: This function appends text at the end of the file
 * @filename: This is the filename that is to open and append text in
 * @text_content: This refers to the NULL terminator string
 * Return: 1 on success, -1 on failure or written class
 */

int append_text_to_file(const char *filename, char *text_content)
{
int fx;
int fy;
int ln = 0;

if (filename == NULL)
	return (-1);

fx = open(filename, O_RDWR | O_APPEND);

	if (fx < 0)
		return (-1);

	if (text_content == NULL)
	{
		close(fx);
		return (1);
	}

	while (*(text_content + ln))
		ln++;

	fy = write(fx, text_content, ln);
	close(fx);

	if (fy < 0)
		return (-1);

	return (1);
}
