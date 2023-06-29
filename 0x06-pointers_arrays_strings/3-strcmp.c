#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: string 1 to compare
 * @s2: string 2 to compare
 *
 * Return: negative if s1 < s2, positive if s1 > s2, 0 if s1 == s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
