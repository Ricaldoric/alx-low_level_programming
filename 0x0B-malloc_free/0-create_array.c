#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes it
 * @size: size of the array to be created
 * @c: character to initialize the array with
 * Return: pointer to the array, or NULL if it fails or size is 0
 */
char *create_array(unsigned int size, char c)
{
	char *array; /* Pointer to hold the array */
	unsigned int i; /* Iterator */
	/* Return NULL if size is 0 */
	if (size == 0)
		return (NULL);
	/* Allocate memory for the array */
	array = malloc(size);
	/* Check if memory allocation was successful */
	if (array == NULL)
		return (NULL);
	/* Initialize the array with character c */
	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
