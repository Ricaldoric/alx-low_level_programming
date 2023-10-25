#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to be searched.
 * @accept: The prefix to be measured.
 *
 * Return: The number of bytes in s which
 *         consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;  /* Counter for the number of bytes*/
	int index;
	/* Iterate through the string s*/
	while (*s)
	{
	/* Check each character of accept*/
	for (index = 0; accept[index]; index++)
	{
		/* If a match is found, increment the counter and break the inner loop*/
		if (*s == accept[index])
		{
			bytes++;
			break;
		}
		/* If we reach the end of accept without a match, return the counter*/
		else if (accept[index + 1] == '\0')
		return (bytes);
	}
	s++;  /* Move to the next character in s*/
	}
	/* Return the final count of matched bytes*/
	return (bytes);
}
