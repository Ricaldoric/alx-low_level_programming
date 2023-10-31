#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 if successful, 1 if error
 */
int main(int argc, char *argv[])
{
	int sum = 0, i, j; /* Variables to store the sum, and loop counters */
	/* Loop through each argument passed to the program */
	for (i = 1; i < argc; i++)
	{
		/* Check each character of the argument */
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			/**
			 * If any character is not a digit, print "Error"
			 * and return with exit status 1
			 */
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		/* Add the integer value of the argument to the sum */
		sum += atoi(argv[i]);
	}
	/* Print the sum followed by a new line */
	printf("%d\n", sum);
	return (0); /* Indicate successful execution */
}
