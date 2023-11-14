#include <stdio.h>

/**
 * main - Start of the program
 * Description: Prints the name of the file it was compiled from
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/**
	 * ___FILE__ is a predefined macro in C that holds the name
	 * of the current input file as a string literal
	 */
	printf("%s\n", __FILE__);
	/* Return 0 to signal successful completion */
	return (0);
}
