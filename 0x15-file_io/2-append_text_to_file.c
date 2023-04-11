#include "main.h"

/**
 * append_text_to_file - This function adds text to the end of a file.
 * @filename: Name of a pointer to a file.
 * @text_content: Text string to append at the end of the file
 * Return: 1 if successful, -1 if function fails or filename is NULL,
 * otherwise -1 if the file does not exist
 */

int append_text_to_file(const char *filename, char *text_content)
{
int op;
int wr;
int  lg = 0;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
for (lg = 0; text_content[lg];)
lg++;
}
op = open(filename, O_WRONLY | O_APPEND);
wr = write(op, text_content, lg);

if (op == -1 || wr == -1)
return (-1);
close(op);
return (1);
}
