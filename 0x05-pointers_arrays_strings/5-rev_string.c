#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to reverse
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i, j;
	char str[500];

	i = 0;

	while (*(s + i))
	{
		str[i] = *(s + i);
		i++;
	}
	j = 0;
	i = i - 1;

	while (i >= 0)
	{
		*(s + i) = str[j];
		i--;
		j++;
	}
}
