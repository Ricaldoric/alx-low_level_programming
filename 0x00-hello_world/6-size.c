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
	char c;
	int i;
	long int m;
	long long int n;
	float x;

	printf("Size of a char: %c\n", sizeof(c));
	printf("Size of an int: %d\n", sizeof(i));
	printf("Size of a long int: %ld\n", sizeof(m));
	printf("Size of a long long int: %lld\n", sizeof(n));
	printf("Size of a float: %f\n", sizeof(x));

	return (0);
}
