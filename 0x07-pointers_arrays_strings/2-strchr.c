#include "main.h"

/**
 * _strchr - Locates a character in a string.
 * @s: The string to be searched.
 * @c: The character to be located.
 *
 * Return: If c is found - a pointer to the first occurrence.
 *         If c is not found - NULL.
 */
char *_strchr(char *s, char c)
{
    int index = 0;  /* Initialize index to start from the first character */
    
    /* Iterate through the string */
    while (s[index])
    {
        /* If the character is found, return a pointer to it */
        if (s[index] == c)
            return (s + index);
        index++;  /* Move to the next character */
    }

    /* Handle the case where c is the null terminator */
    if (c == '\0')
        return (s + index);

    /* If the character was not found, return NULL */
    return (NULL);
}

