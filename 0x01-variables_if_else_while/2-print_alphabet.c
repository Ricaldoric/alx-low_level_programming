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

	for (char c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}


