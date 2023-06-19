#include <stdio.h>
/**
 * main - start of the program
 *
 * Description: 'the program prints the size of various types on the computer it is compiled and run on'
 *
 * return: always (0) indicating success
 */

int main(void)
{

	printf("Size of a char: %lu\n", sizeof(char));
	printf("Size of an int: %lu\n", sizeof(int));
	printf("Size of a long int: %lu\n", sizeof(long));
	printf("Size of a long long int: %lu\n", sizeof(long long));
	printf("Size of a float: %lu\n", sizeof(float));

	return (0);
}
