#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string containing the binary number
 *
 * Description: This function iterates through each character of the string,
 * converting it to the corresponding binary value.
 *
 * Return: the converted number, or 0 if any character is not 0 or 1 or if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
    unsigned int num = 0; /* Initialize result number to 0 */

    if (b == NULL) /* Check if input string is NULL */
        return 0;

    while (*b) /* Iterate through each character of the string */
    {
        num <<= 1; /* Shift current number by one to make room for next bit */

        if (*b == '1')
            num += 1; /* Add 1 if current character is '1' */
        else if (*b != '0') /* Check if character is not '0' or '1' */
            return 0;

        b++; /* Move to next character */
    }

    return num; /* Return the result */
}

