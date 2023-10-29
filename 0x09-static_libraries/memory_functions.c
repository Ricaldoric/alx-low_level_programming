#include "main.h"

char *_memset(char *s, char b, unsigned int n) {
    char *original_s = s;
    while (n--)
        *s++ = b;
    return original_s;
}

char *_memcpy(char *dest, char *src, unsigned int n) {
    char *original_dest = dest;
    while (n--)
        *dest++ = *src++;
    return original_dest;
}

char *_strchr(char *s, char c) {
    while (*s) {
        if (*s == c)
            return s;
        s++;
    }
    if (c == '\0')
        return s;
    return NULL;
}

char *_strpbrk(char *s, char *accept) {
    while (*s) {
        if (_strchr(accept, *s))
            return s;
        s++;
    }
    return NULL;
}

char *_strstr(char *haystack, char *needle) {
    char *start = haystack;
    char *pattern = needle;
    while (*haystack) {
        if (*pattern == '\0')
            return start;
        if (*haystack == *pattern) {
            haystack++;
            pattern++;
        } else {
            haystack = ++start;
            pattern = needle;
        }
    }
    if (*pattern == '\0')
        return start;
    return NULL;
}

