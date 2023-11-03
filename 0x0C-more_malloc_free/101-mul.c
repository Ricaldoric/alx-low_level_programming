#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers from min to max inclusive.
 * @min: The first value of the array.
 * @max: The last value of the array.
 *
 * Return: Pointer to the newly created array or NULL if error.
 */
int *array_range(int min, int max)
{
    int *array;
    int i, size;

    /* Check if min is greater than max */
    if (min > max)
        return NULL;

    /* Calculate the size of the array */
    size = max - min + 1;

    /* Allocate memory for the array */
    array = malloc(sizeof(int) * size);

    /* If malloc fails, return NULL */
    if (array == NULL)
        return NULL;

    /* Populate the array with all the values from min to max */
    for (i = 0; min <= max; i++, min++)
        array[i] = min;

    return array;
}

