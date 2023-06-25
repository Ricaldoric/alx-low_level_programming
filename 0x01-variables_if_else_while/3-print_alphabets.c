#include <stdio.h>

/**
 * main - program entry point
 *
 * description: prints alphabets a-z using putchar
 *
 * Return: Always (0), success
 */
int main(void) /*start of the prohgram*/
{
	char c, A;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	for (A = 'A'; A <= 'Z'; A++)
	{
		putchar(A);
	}
	putchar('\n');

	return (0);
}


