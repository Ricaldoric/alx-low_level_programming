#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n'); /* print \n if n is 0 or negative */
	}
	else
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (j == i)
				{
					_putchar('\\'); /* print \ if j is equal to i */
				}
				else if (j < i)
				{
					_putchar(' '); /* print space if j is less than i */
				}
			}
			_putchar('\n'); /* print \n after each row */
		}
	}
}

