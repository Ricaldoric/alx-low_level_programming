#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: (0). success
 */
void more_numbers(void)
{
	int j, i;

	for (i = 1; i < 10; i++) /*initialize counter, max 10 times */
	{
		for (j = 0; j <= 14; j++) /* print numbers 0-14 */
		{
			if (j >= 10)
				_putchar((j / 10) + '0'); /* print first digit */
				_putchar((j % 10) + '0'); /* print second digit */
		}
		_putchar('\n'); /* print new line */
	}
}
