#include <stdio.h>

/**
 * main - program entry point
 *
 * description: prints alphabets a-z using putchar except q and e
 *
 * Return: Always (0), success
 */
int main(void) /*start of the prohgram*/
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'q')
			continue;
		if (c == 'e')
			continue;
		else
		{
		putchar(c);
		}
	}
	putchar('\n');

	return (0);
}


