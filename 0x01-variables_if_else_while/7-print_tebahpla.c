#include <stdio.h>

/* main - program entry
 *
 * Description: prints alphabets in reverse order
 *
 * Return: (0), indicating success
 */
int main(void)
{
	char c;
	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');

	return(0);
}
