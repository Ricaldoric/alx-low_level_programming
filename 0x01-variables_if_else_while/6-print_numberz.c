#include <stdio.h>

/**
 * main - program entry point
 *
 * description: prints all single digit numbers of base 10 starting from 0
 *
 * Return: Always (0), success
 */
int main(void) /*start of the prohgram*/
{
	int i;

	for (i = 0; i <= 10; i++)
	{
		putchar('0' + i);
	}
	putchar('\n');

	return (0);
}


