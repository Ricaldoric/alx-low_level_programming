#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: string to be appended to
 * @src: string to append
 * @n: number of bytes to append
 *
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
	{
		i++; /* increment counter past null byte */
	}
	j = 0;

	while (src[j] != '\0' && j < n) /* appends src to dest */
	{
		dest[i] = src[j]; /* at the end of dest */
		i++;
		j++;
	}
	return (dest); /* return pointer to dest */
}
