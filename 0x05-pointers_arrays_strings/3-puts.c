#include "main.h"

/**
 * _puts - prints a string, followed by a new lin
 * @str: string to print
 *
 * Return: void
 */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i))
		_putchar(*(str + i++));
	_putchar('\n');
}
}
