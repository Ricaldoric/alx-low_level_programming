#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stddef.h>

/* Function that prints a name */
void print_name(char *name, void (*f)(char *));

/* Function that executes a function on each element of an array */
void array_iterator(int *array, size_t size, void (*action)(int));

/* Function that searches for an integer in an array */
int int_index(int *array, int size, int (*cmp)(int));

#endif /* FUNCTION_POINTERS_H */

