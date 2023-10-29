#include "main.h"

int _strlen(char *s) {
    int length = 0;
    while (s[length])
        length++;
    return length;
}

char *_strcpy(char *dest, char *src) {
    char *original_dest = dest;
    while (*src)
        *dest++ = *src++;
    *dest = '\0';
    return original_dest;
}

char *_strcat(char *dest, char *src) {
    char *original_dest = dest;
    while (*dest)
        dest++;
    while (*src)
        *dest++ = *src++;
    *dest = '\0';
    return original_dest;
}

char *_strncat(char *dest, char *src, int n) {
    char *original_dest = dest;
    while (*dest)
        dest++;
    while (n-- && *src)
        *dest++ = *src++;
    if (n > 0)
        *dest = '\0';
    return original_dest;
}

char *_strncpy(char *dest, char *src, int n) {
    char *original_dest = dest;
    while (n-- && *src) {
        *dest++ = *src++;
    }
    while (n-- > 0)
        *dest++ = '\0';
    return original_dest;
}

