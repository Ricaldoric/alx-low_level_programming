#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to be searched.
 * @accept: The set of bytes to be searched for.
 *
 * Return: If a set is matched - a pointer to the matched byte.
 *         If no set is matched - NULL.
 */
char *_strpbrk(char *s, char *accept)
{
    int index;

    /* Iterate through the string s */
    while (*s)
    {
        /* Check each character of accept */
        for (index = 0; accept[index]; index++)
        {
            /* If a match is found, return a pointer to the matched byte */
            if (*s == accept[index])
                return (s);
        }
        s++;  /* Move to the next character in s */
    }

    /* If no match is found, return NULL */
    return (NULL);
}

