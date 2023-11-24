#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h> // Include standard library for size_t, etc.

/* Prototype for function to convert binary number to an unsigned int */
unsigned int binary_to_uint(const char *b);

/* Prototype for function to print the binary representation of a number */
void print_binary(unsigned long int n);

/* Prototype for function to get the value of a bit at a given index */
int get_bit(unsigned long int n, unsigned int index);

/* Prototype for function to set the value of a bit to 1 at a given index */
int set_bit(unsigned long int *n, unsigned int index);

/* Prototype for function to set the value of a bit to 0 at a given index */
int clear_bit(unsigned long int *n, unsigned int index);

/* Prototype for function to count number of bits to flip to get another number */
unsigned int flip_bits(unsigned long int n, unsigned long int m);

/* Prototype for function to check the endianness of the system */
int get_endianness(void);

/* Prototype for the _putchar function */
int _putchar(char c);

#endif /* MAIN_H */

