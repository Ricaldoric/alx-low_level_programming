#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Executes a function given as a parameter
 * on each element of an array.
 * @array: array to iterate over
 * @size: size of the array
 * @action: pointer to the function to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && action)
	{/* Check if array and action are not NULL */
		for (size_t i = 0; i < size; i++) /* Iterate over array */
			action(array[i]); /* Call action for each element */
	}
}
