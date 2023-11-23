#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to be printed in binary
 *
 * Description: This function uses bitwise operations to extract
 * and print each bit of the given number from left to right.
 */
void print_binary(unsigned long int n)
{
    unsigned long int mask = 1UL << (sizeof(n) * 8 - 1); 
    /* Create a mask with a 1 at the leftmost bit and 
       zeros elsewhere. The size of n is determined, 
       then shifted left to the most significant bit. */

    int leading_zero = 1; 
    /* Leading_zero flag to handle leading zeros in binary 
       representation. Initially set to true (1). */

    while (mask > 0)
    {
        if (n & mask) 
        {
            _putchar('1'); 
            /* If the current bit (where mask has 1) in n is 1, 
               print 1. Also, set leading_zero to false (0). */
            leading_zero = 0;
        }
        else if (!leading_zero)
            _putchar('0'); 
            /* If the current bit is 0 and we have encountered 
               a 1 before, print 0. */

        mask >>= 1; 
        /* Right shift the mask by 1 to move to the next bit. */
    }

    if (leading_zero)
        _putchar('0'); 
        /* If n was 0, then we haven't printed anything yet. 
           So, print a single 0. */
}

