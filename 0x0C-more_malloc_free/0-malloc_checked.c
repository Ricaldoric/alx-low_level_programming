#include "main.h"
#include <stdlib.h> /* For malloc and exit */

/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes to allocate
 * 
 * Return: pointer to the allocated memory
 * If malloc fails, the function will cause normal process termination
 * with a status value of 98
 */
void *malloc_checked(unsigned int b)
{
    void *ptr;

    /* Allocate memory using malloc */
    ptr = malloc(b);

    /* If malloc fails, terminate the process */
    if (ptr == NULL)
    {
        exit(98);
    }

    /* If malloc succeeds, return the pointer */
    return (ptr);
}

