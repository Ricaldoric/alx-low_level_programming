#include "main.h"

/**
 * _strstr - Locates a substring.
 * @haystack: The string to be searched.
 * @needle: The substring to be located.
 *
 * Return: If the substring is located - a pointer to the beginning
 *         of the located substring.
 *         If the substring is not located - NULL.
 */
char *_strstr(char *haystack, char *needle)
{
    char *start = haystack, *sub = needle;  /* Initialize pointers to track the start of the substring */
    
    /* Iterate through the haystack */
    while (*haystack)
    {
        /* If the end of the needle is reached, return the start of the found substring */
        if (*sub == '\0')
            return (start);
        
        /* If the characters match, move to the next characters */
        if (*sub == *haystack)
        {
            sub++;
            haystack++;
        }
        /* If the characters don't match, reset the needle pointer and move the haystack pointer */
        else
        {
            sub = needle;
            haystack = ++start;
        }
    }

    /* Handle the case where the needle is an empty string */
    if (*sub == '\0')
        return (start);

    /* If the substring is not found, return NULL */
    return (NULL);
}

