#include "main.h"
/**
 * leet - encodes a string into 1337
 * @s: string to encode
 *
 * Return: address of s
 */
char *leet(char *s)
{
	int i, j;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};
	char num[8] = {'0', '1', '2', '3', '4', '5', '6', '7'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= 7; j++)
		{
			if (s[i] == leet[j] || s[i] - 32 == leet[j])
			{
				s[i] = num[j];
			}
		}
	}
	return (s);

}
