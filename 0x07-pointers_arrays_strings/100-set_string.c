#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: The pointer to a pointer to a char.
 * @to: The character pointer to set s to.
 */
void set_string(char **s, char *to)
{
    *s = to;  /* Set the value at the address pointed to by s to the address of to */
}

