#include <stdio.h>
/**
 * main - start of the program
 *
 * Description: the program prints the size of various types on
 *
 * Return: always (0), indicating success
 */

int main(void) /*the program will display the sze of characters*/
{

	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of an int: %lu byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));

	/*return 0 indicates the end of the program and it was successful*/
	return (0);
}
