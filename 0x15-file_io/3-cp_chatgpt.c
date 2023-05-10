#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>

#define BUFFER_SIZE 1024

void err(const char *message)
{
dprintf(STDERR_FILENO, "%s\n", message);
exit(EXIT_FAILURE);
}

void cp_file(const char *file_from, const char *file_to)
{
    int fd_from, fd_to, bytes_read, bytes_written;
    char buffer[BUFFER_SIZE];

    /* Open the source file for reading */
    fd_from = open(file_from, O_RDONLY);
    if (fd_from == -1)
        err("Error: Can't read from file");

    /* Open or create the destination file for writing */
    fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd_to == -1)
        err("Error: Can't write to file");

    /* Copy data from source to destination */
    while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
    {
        bytes_written = write(fd_to, buffer, bytes_read);
        if (bytes_written == -1)
            err("Error: Can't write to file");
    }

    if (bytes_read == -1)
        err("Error: Can't read from file");

    /* Close the file descriptors */
    if (close(fd_from) == -1 || close(fd_to) == -1)
        err("Error: Can't close fd");

    exit(EXIT_SUCCESS);
}

int main(int argc, char *argv[])
{
    /* Check the number of arguments */
    if (argc != 3)
    {
        dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
        return 97;
    }

    char *file_from = argv[1];
    /* char *file_to = argv[2]; */

    /* Check if file_from exists and is readable */
    if (access(file_from, R_OK) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
        return 98;
    }

    /* Perform the file copy */
    cp_file(file_from, file_to);

    return 0;
}
