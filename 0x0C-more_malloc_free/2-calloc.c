#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array and sets it to zero.
 * @nmemb: The number of elements in the array.
 * @size: The size of each element.
 *
 * Return: Pointer to allocated memory or NULL if error.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
    unsigned int i;
    char *memory;
    unsigned int total_size;

    /* If nmemb or size is 0, return NULL */
    if (nmemb == 0 || size == 0)
        return NULL;

    /* Calculate total size of the array */
    total_size = nmemb * size;

    /* Allocate memory using malloc */
    memory = malloc(total_size);

    /* If malloc fails, return NULL */
    if (memory == NULL)
        return NULL;

    /* Set allocated memory to zero */
    for (i = 0; i < total_size; i++)
        memory[i] = 0;

    return (void *)memory;
}

