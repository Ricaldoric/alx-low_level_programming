#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number, or 0 if the string contains a non-binary
 * character or if the string is NULL
 */
unsigned int binary_to_uint(const char *b)
{
    unsigned int num = 0;

    if (!b)
        return 0;

    while (*b)
    {
        if (*b == '1')
            num = (num << 1) | 1;
        else if (*b == '0')
            num <<= 1;
        else
            return 0; // Non-binary character found

        b++;
    }

    return num;
}
