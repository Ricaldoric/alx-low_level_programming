#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 *             to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Description: This function calculates the number of bits that are
 * different between two numbers.
 *
 * Return: the number of bits needed to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
    unsigned long int xor = n ^ m; /* XOR of n and m */
    unsigned int count = 0;        /* Counter for set bits */

    /* Iterate through all the bits of xor. If a bit is set, it means
       that the corresponding bits in n and m are different. */
    while (xor)
    {
        count += xor & 1; /* Increment count if least significant bit is set */
        xor >>= 1;        /* Right shift xor to check the next bit */
    }

    return count; /* Return the total count of differing bits */
}
