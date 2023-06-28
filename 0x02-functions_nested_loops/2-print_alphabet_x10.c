#include "main.h"
#include <unistd.h>
/**
 * print_alphabet_x10 - main program
 *
 * return 0, success
 */
void print_alphabet_x10(void)
{
	char letter = 'a';
	int i;

	for (i = 0; i < 10; i++)
	{
		int j;

		for (j = 0; j < 26; j++)
		{
			_putchar(letter);
			letter++;
		}
		 _putchar('\n');

	letter = 'a';  /* Reset letter to 'a' for the next iteration*/
	}
}

