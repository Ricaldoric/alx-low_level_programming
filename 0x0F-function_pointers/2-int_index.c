#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array
 * @array: array to search in
 * @size: number of elements in the array
 * @cmp: pointer to the comparison function
 * Return: index of the first matching element or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array && cmp)
	{
		/* Check if array and cmp are not NULL */
		for (int i = 0; i < size; i++)
		{
			/* Loop over array */
			if (cmp(array[i])) /* If cmp does not return 0 */
				return (i); /* Return index of current element */
		}
	}
	return (-1); /* No match found or invalid input */
}
