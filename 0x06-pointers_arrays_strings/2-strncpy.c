include "main.h"
/**
 * _strncpy - copies a string up to n bytes
 * @dest: destination string pointer
 * @src: source string pointer
 * @n: number of bytes to copy from src
 *
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (i < n && src[i]) /* copy n bytes or less */
	{
		dest[j] = src[i]; /* copy current element */
		i++, j++;
	}
	while (j < n)
		dest[j++] = '\0'; /* null bytes for remaining */
	return (dest); /* return dest */
}
