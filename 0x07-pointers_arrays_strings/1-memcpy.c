#include "main.h"

/**
 * _memcpy - Copies n bytes from memory area src to
 *           memory area dest.
 * @dest: A pointer to the memory area to copy to.
 * @src: The source buffer to copy from.
 * @n: The number of bytes to copy.
 *
 * Return: A pointer to the destination buffer @dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	/* Iterate through the memory areas */
	for (index = 0; index < n; index++)
	{
		/* Copy each byte from src to dest */
		dest[index] = src[index];
	}
	/* Return the pointer to the destination buffer */
	return (dest);
}

