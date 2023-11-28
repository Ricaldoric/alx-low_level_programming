#include "main.h"

/**
 * create_file - creates a file
 * @filename: the name of the file to create
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
    int fd; /* File descriptor */
    ssize_t nwritten; /* Variable to store number of bytes written */

    /* Check if the filename is NULL, return -1 if true */
    if (!filename)
        return (-1);

    /* Open the file in write-only mode, create if it doesn't exist with 0600 permissions */
    fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
    if (fd == -1) /* Check if opening/creating the file fails */
        return (-1);

    /* If text_content is not NULL, write it to the file */
    if (text_content) {
        nwritten = write(fd, text_content, strlen(text_content));
        if (nwritten == -1) { /* Check if write operation fails */
            close(fd); /* Close the file descriptor */
            return (-1);
        }
    }

    /* Close the file */
    close(fd);

    /* Return 1 for success */
    return (1);
}

