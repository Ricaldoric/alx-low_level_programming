#include "main.h"
/**
 * _isupper - program entry
 * description: Write a function that checks for uppercase character.
 * Prototype: int _isupper(int c)
 * Return: 1 if c is uppercase
 * @c: char c
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90) /* 65 is the ascii number for A and 90 for Z */
	{
		return (1); /* if c is uppercase return 1 */
	}
	return (0); /* if c is not uppercase return 0 */
}
