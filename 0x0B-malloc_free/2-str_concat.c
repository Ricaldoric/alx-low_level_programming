#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to the concatenated string, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str; /* Pointer to hold the concatenated string */
	int i, j, len1 = 0, len2 = 0; /* Iterators and lengths of strings */
	/* Calculate the length of s1 */
	while (s1 && s1[len1])
		len1++;
	/* Calculate the length of s2 */
	while (s2 && s2[len2])
		len2++;
	/* Allocate memory for the concatenated string */
	concat_str = malloc(len1 + len2 + 1);
	/* Check if memory allocation was successful */
	if (concat_str == NULL)
		return (NULL);
	/* Copy s1 to concat_str */
	for (i = 0; i < len1; i++)
		concat_str[i] = s1[i];
	/* Concatenate s2 to concat_str */
	for (j = 0; j < len2; j++, i++)
		concat_str[i] = s2[j];
	concat_str[i] = '\0'; /* Null-terminate the concatenated string */
	return (concat_str);
}
