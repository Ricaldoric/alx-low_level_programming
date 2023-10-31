#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i; /* Loop counter */
	/* Loop through each argument passed to the program */
	for (i = 0; i < argc; i++)
		/* Print the argument followed by a new line */
		printf("%s\n", argv[i]);
	return (0); /* Indicate successful execution */
}
