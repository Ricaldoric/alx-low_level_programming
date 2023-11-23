#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to the number to change
 * @index: the index, starting from 0, of the bit to set
 *
 * Description: This function sets the bit at a specific position 
 * to 1, using bitwise OR operation.
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
    /* Check if index is out of range of the number of bits 
       in 'unsigned long int'. */
    if (index >= (sizeof(*n) * 8))
        return (-1);

    /* Shift 1 to the left by 'index' positions. This creates a mask
       where the only set bit is at the 'index' position. Then, apply
       bitwise OR to set the bit at 'index' to 1. */
    *n |= (1UL << index);

    return (1); /* Return 1 indicating success. */
}

