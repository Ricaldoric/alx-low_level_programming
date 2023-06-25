#include <stdio.h>
/**
 * main - program entry point
 *
 * Descriprion: prints all the hexagonal numbers base 16
 *
 * Return: always (0), success
 */
int main(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}

