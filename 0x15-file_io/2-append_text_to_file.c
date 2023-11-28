#include "main.h"

/* Appends text at the end of a file */
int append_text_to_file(const char *filename, char *text_content)
{
    int fd; /* File descriptor */
    ssize_t nwritten; /* Bytes written */

    /* Check if filename is NULL */
    if (!filename)
        return (-1);

    /* Open file in append mode */
    fd = open(filename, O_WRONLY | O_APPEND);
    if (fd == -1) /* Fail to open */
        return (-1);

    /* If text_content is not NULL, write it */
    if (text_content) {
        nwritten = write(fd, text_content, strlen(text_content));
        if (nwritten == -1) { /* Write fails */
            close(fd);
            return (-1);
        }
    }

    /* Close file and return success */
    close(fd);
    return (1);
}

