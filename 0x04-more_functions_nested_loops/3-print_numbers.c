#include "main.h"
/**
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line.
 * Return: Always 0, indicates success.
 */
void print_numbers(void)
{
	int i; /*Declaring statements*/

	for (i = 0; i < 10; i++) /* initial condition, condition and increment*/
	{
		_putchar(i + '0'); /* prints the numbers, from 0 to 9 */
	}
	_putchar('\n'); /*new line*/
}
