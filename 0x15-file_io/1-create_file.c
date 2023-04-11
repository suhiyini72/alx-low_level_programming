#include "main.h"

/**
 * create_file - This function creates a file
 * @filename: The pointer name of the file to be created
 * @text_content: Refers to a pointer to a string to write to the file
 * Return: 1 if successful, otherwise -1 for failure
 */

int create_file(const char *filename, char *text_content)
{
	int p;
	
	int wr;
	
	int lg = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lg = 0; text_content[lg];)
			lg++;
	}

	p = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(p, text_content, lg);

	if (p == -1 || wr == -1)
		return (-1);

	close(p);

	return (1);
}
