#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector (Unused)
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	/**
	 * Print the number of arguments passed
	 * to the program minus one (to exclude the program name)
	 */
	printf("%d\n", argc - 1);
	return (0); /* Indicate successful execution */
}

