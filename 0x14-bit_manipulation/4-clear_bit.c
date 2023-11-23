#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to the number to change
 * @index: the index, starting from 0, of the bit to set
 *
 * Description: This function sets the bit at a specific position
 * to 0, using bitwise AND operation with a mask.
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
    unsigned long int mask;

    /* Check if index is out of range of the number of bits 
       in 'unsigned long int'. */
    if (index >= (sizeof(*n) * 8))
        return (-1);

    /* Create a mask that has all bits set to 1, except for the bit
       at 'index', which is set to 0. This is achieved by shifting
       1 to the left by 'index' positions, then taking the complement. */
    mask = ~(1UL << index);

    /* Apply bitwise AND with the mask to set the bit at 'index' to 0. */
    *n &= mask;

    return (1); /* Return 1 indicating success. */
}

