#include "main.h"
#include <stdlib.h>

/**
 * _strlen - Calculate the length of a string
 * @s: The string to get the length of
 *
 * Return: Length of the string
 */
unsigned int _strlen(char *s)
{
    unsigned int length = 0;
    
    /* If the string is NULL, treat it as an empty string */
    if (s == NULL)
        s = "";
    
    /* Increment length for each character until the end */
    while (s[length])
        length++;
    
    return length;
}

/**
 * string_nconcat - Concatenates two strings up to n characters from s2.
 * @s1: The first string
 * @s2: The second string
 * @n: The maximum number of characters to concatenate from s2
 *
 * Return: Pointer to the newly created string. NULL if it fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *new_str;
    unsigned int len1, len2, i, j;
    
    /* Get the lengths of s1 and s2 */
    len1 = _strlen(s1);
    len2 = _strlen(s2);
    
    /* If n is greater than or equal to the length of s2, use the whole s2 */
    if (n >= len2)
        n = len2;
    
    /* Allocate memory for the new string */
    new_str = malloc(sizeof(char) * (len1 + n + 1));
    if (new_str == NULL)
        return NULL;

    /* Copy s1 into new string */
    for (i = 0; s1 && s1[i]; i++)
        new_str[i] = s1[i];
    
    /* Concatenate up to n characters from s2 */
    for (j = 0; s2 && j < n; j++, i++)
        new_str[i] = s2[j];
    
    /* Null-terminate the new string */
    new_str[i] = '\0';
    
    return new_str;
}

