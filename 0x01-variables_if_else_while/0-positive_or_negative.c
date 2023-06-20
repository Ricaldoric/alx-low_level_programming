#include <stdlib.h>
#include <time.h>
/**
 * main - start of the program
 *
 * Description: the program evaluates random numbers if they are + or -
 *
 * return: Always (0), indicating succcess
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0) {
		printf("%d is positive\n", n);
	} else if (n==0) {
		print ("%d is zero\n", n);
	} else if (n < 0) {
		print ("%d is negative\n, n");
	}

	return (0);
}
