#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals
 *                  of a square matrix of integers.
 * @a: The matrix of integers.
 * @size: The size of the matrix.
 */
void print_diagsums(int *a, int size)
{
    int index, sum1 = 0, sum2 = 0;  /* Initialize indices and sums for the diagonals */

    /* Calculate the sum of the first diagonal */
    for (index = 0; index < size; index++)
    {
        sum1 += a[index];
        a += size;  /* Move to the next diagonal element */
    }

    a -= size;  /* Reset the pointer to the last row */

    /* Calculate the sum of the second diagonal */
    for (index = 0; index < size; index++)
    {
        sum2 += a[index];
        a -= size;  /* Move to the previous diagonal element */
    }

    /* Print the sums of the diagonals */
    printf("%d, %d\n", sum1, sum2);
}

