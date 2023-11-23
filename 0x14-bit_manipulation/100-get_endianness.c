#include "main.h"

/**
 * get_endianness - checks the endianness of the system
 *
 * Description: This function checks whether the system is
 * big endian or little endian. In a little-endian system,
 * the least significant byte is stored first. In a big-endian
 * system, the most significant byte is stored first.
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
    unsigned int i = 1;
    /* Create a variable 'i' and set its value to 1. In memory,
       this will be stored as 01 00 00 00 in little-endian and
       00 00 00 01 in big-endian. */

    char *c = (char *)&i;
    /* Create a char pointer 'c' and point it to the first byte
       of 'i'. In C, a char is always 1 byte. */

    return (int)*c;
    /* Dereference 'c' to get the value of the first byte. If it
       is 1, then it's little-endian as the least significant byte
       (which is 1) comes first. Otherwise, it's big-endian. */
}

