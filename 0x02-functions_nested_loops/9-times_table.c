#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int i, j, res;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			res = i * j;
			if (j == 0)
			{
				_putchar('0' + res);
			}
			else if (res <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + res);
			}
			else if (res > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (res / 10));
				_putchar('0' + (res % 10));
			}
		}
		_putchar('\n');
	}
}
