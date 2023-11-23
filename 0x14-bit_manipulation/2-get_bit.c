#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number to be searched
 * @index: the index, starting from 0 of the bit to get
 *
 * Description: This function uses bitwise operations to extract
 * the value of a bit at a specified index in a number.
 *
 * Return: the value of the bit at index or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
    /* Check if the index is greater than the number of bits
       in 'unsigned long int' */
    if (index >= (sizeof(n) * 8))
        return -1;

    /* Shift 'n' right by 'index' positions. This brings the desired bit
       to the least significant bit position. Apply the bitwise AND
       with 1 to extract this bit. */
    return ((n >> index) & 1);
}

