#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 if successful, 1 if error
 */
int main(int argc, char *argv[])
{
	int num1, num2, product;
	/*above are  Variables to store the two numbers and their product */
	/**
	 * Check if the program has received exactly
	 * two arguments (excluding the program name)
	 */
	if (argc != 3)
	{
		/* If not, print "Error" and return with exit status 1 */
		printf("Error\n");
		return (1);
	}
	/* Convert the two arguments from string to integer */
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	product = num1 * num2; /* Multiply the two numbers */
	/* Print the result followed by a new line */
	printf("%d\n", product);
	return (0); /* Indicate successful execution */
}

