#include "main.h"

#define BUFFER_SIZE 1024

/* Copies content from one file to another */
int main(int argc, char *argv[])
{
    int file_from, file_to; /* File descriptors */
    ssize_t nread, nwritten; /* Bytes read and written */
    char buffer[BUFFER_SIZE]; /* Buffer */

    /* Check correct number of arguments */
    if (argc != 3) {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit(97);
    }

    /* Open source file */
    file_from = open(argv[1], O_RDONLY);
    if (file_from < 0)
        exit_with_error(file_from, argv[1], 98);

    /* Open/Create destination file */
    file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (file_to < 0)
        exit_with_error(file_to, argv[2], 99);

    /* Copy process */
    while ((nread = read(file_from, buffer, BUFFER_SIZE)) > 0) {
        nwritten = write(file_to, buffer, nread);
        if (nwritten != nread)
            exit_with_error(file_to, argv[2], 99);
    }

    if (nread < 0)
        exit_with_error(file_from, argv[1], 98);

    /* Close files */
    if (close(file_from) < 0)
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from), exit(100);
    if (close(file_to) < 0)
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to), exit(100);

    return (0);
}

/* Handles error and exits */
void exit_with_error(int fd, char *filename, int status)
{
    dprintf(STDERR_FILENO, "Error: Can't %s %s\n",
            (status == 98 ? "read from" : "write to"), filename);
    if (fd >= 0)
        close(fd);
    exit(status);
}

