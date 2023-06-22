#include "main.h"
/**
 * print_most_numbers - prints the numbers, from 0 to 9
 * Return: 0 indicating sucesfull execution.
 * parameters: void
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if ((i != 2) && (i != 4)) /* if i is not 2 and 4 */
		{
			_putchar(i + '0'); /* print i */
		}
	}
	_putchar('\n'); /* print new line */
}

