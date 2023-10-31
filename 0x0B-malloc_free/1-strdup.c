#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicates a string
 * @str: string to be duplicated
 * Return: pointer to the duplicated string or NULL if insufficient memory
 */
char *_strdup(char *str)
{
	char *dup; /* Pointer to hold the duplicated string */
	int i, len = 0; /* Iterator and length of the string */
	/* Return NULL if str is NULL */
	if (str == NULL)
		return (NULL);
	/* Calculate the length of the string */
	while (str[len])
		len++;
	/* Allocate memory for the duplicated string */
	dup = malloc(len + 1);
	/* Check if memory allocation was successful */
	if (dup == NULL)
		return (NULL);
	/* Copy the string to the newly allocated space */
	for (i = 0; i < len; i++)
		dup[i] = str[i];
	dup[len] = '\0'; /* Null-terminate the duplicated string */
	return (dup);
}
