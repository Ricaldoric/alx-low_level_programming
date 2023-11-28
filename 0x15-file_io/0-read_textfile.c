#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the name of the file to be read
 * @letters: the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd; /* File descriptor for the opened file */
	ssize_t nread, nwritten; /* Variables to store number of bytes*/
	char *buffer; /* Buffer to store the read characters */
	
	/* Check if the filename is NULL, return 0 if true */
	if (!filename)
		return (0);
	
	/* Allocate memory for the buffer to store read characters */
	buffer = malloc(sizeof(char) * letters);
	if (!buffer) /* If memory allocation fails, return 0 */
	return (0);
	/* Open the file in read-only mode */
    fd = open(filename, O_RDONLY);
	if (fd == -1) { /* Check if opening the file fails */
        free(buffer); /* Free the allocated buffer */
		return (0);
		}
		/* Read 'letters' number of bytes from the file */
		nread = read(fd, buffer, letters);
		if (nread == -1) { /* Check if read operation fails */
		close(fd); /* Close the file descriptor */
		free(buffer); /* Free the buffer */
		return (0);
		}
		
		/* Write the read content to standard output */
		nwritten = write(STDOUT_FILENO, buffer, nread);
		if (nwritten != nread) { 
		/* Check if write operation fails or doesn't write everything */
		close(fd); /* Close the file descriptor */
		free(buffer); /* Free the buffer */
		return (0);
		}
		/* Close the file and free the buffer */
		close(fd);
		free(buffer);
		/* Return the number of bytes written */
		return (nwritten);
		}

