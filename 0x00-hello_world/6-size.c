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

	printf("Size of a char: %c\n", sizeof(char));
	printf("Size of an int: %d\n", sizeof(int));
	printf("Size of a long int: %ld\n", sizeof(long));
	printf("Size of a long long int: %lld\n", sizeof(long long));
	printf("Size of a float: %f\n", sizeof(float));

	return (0);
}
