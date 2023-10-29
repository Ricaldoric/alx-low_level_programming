#include "main.h"

int _abs(int n) {
    return (n >= 0 ? n : -n);
}

int _atoi(char *s) {
    int result = 0;  /* Result variable to store the final integer value */
    int sign = 1;    /* Sign variable to store the sign of the integer, 1 for positive, -1 for negative */

    /* Skip whitespaces */
    while (*s == ' ' || *s == '\t' || *s == '\n') {
        s++;
    }

    /* Check for sign */
    if (*s == '-' || *s == '+') {
        if (*s == '-') {
            sign = -1;  /* Update sign if negative */
        }
        s++;
    }

    /* Convert string to integer */
    while (*s >= '0' && *s <= '9') {
        result = result * 10 + (*s - '0');  /* Update result with current digit */
        s++;
    }

    return sign * result;  /* Return the final result with the correct sign */
}

int _strcmp(char *s1, char *s2) {
    while (*s1 && (*s1 == *s2)) {
        s1++;
        s2++;
    }
    return (unsigned char)*s1 - (unsigned char)*s2;
}

unsigned int _strspn(char *s, char *accept) {
    unsigned int count = 0;
    while (*s && _strchr(accept, *s++)) {
        count++;
    }
    return count;
}

void _puts(char *s) {
    while (*s) {
        _putchar(*s++);
    }
    _putchar('\n');
}

