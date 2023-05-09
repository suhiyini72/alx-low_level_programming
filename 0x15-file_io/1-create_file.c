#include "main.h"

/**
 * create_file: This function creates a file
 * @filename: This represents the filename to create
 * @text_content: This is the NULL terminated string to write to the file
 * Returns: 1 on success, -1 on failure or if file can't be created nor written
 */

int create_file(const char *filename, char *text_content)
{
	int fx;
	int fy;
	int ln = 0;

	if (filename == NULL)
		return (0);

	fx = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

		if (fx < 0)
			return (-1);

	while (text_content && *(text_content + ln))
				ln++;

	fy = write(fx, text_content, ln);
	close(fx);

	if (fy < 0)
		return (-1);
	return (1);
return (0);
}
