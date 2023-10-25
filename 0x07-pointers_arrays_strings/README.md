# 0x07. C - Even more pointers, arrays, and strings

This project is part of the ALX Software Engineering Program, focusing on deepening the understanding of pointers, arrays, and strings in the C programming language.

## General Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- All files will be compiled on Ubuntu 20.04 LTS using `gcc`, with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files should end with a new line
- A `README.md` file, at the root of the folder of the project is mandatory
- The code should use the Betty style
- No more than 5 functions per file
- Not allowed to use global variables
- Not allowed to use the standard library. Any use of functions like `printf`, `puts`, etc… is forbidden
- Allowed to use `_putchar`
- Don’t have to push `_putchar.c`, we will use our file. If you do it won’t be taken into account
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `main.h`
- You are not allowed to use any standard library functions

## Learning Objectives

- Understanding pointers to pointers and how to use them
- Working with multidimensional arrays and how to use them
- Knowing the most common C standard library functions to manipulate strings

## Tasks

### 0. memset
Write a function that fills memory with a constant byte.
- Prototype: `char *_memset(char *s, char b, unsigned int n);`

### 1. memcpy
Write a function that copies memory area.
- Prototype: `char *_memcpy(char *dest, char *src, unsigned int n);`

### 2. strchr
Write a function that locates a character in a string.
- Prototype: `char *_strchr(char *s, char c);`

### 3. strspn
Write a function that gets the length of a prefix substring.
- Prototype: `unsigned int _strspn(char *s, char *accept);`

### 4. strpbrk
Write a function that searches a string for any of a set of bytes.
- Prototype: `char *_strpbrk(char *s, char *accept);`

### 5. strstr
Write a function that locates a substring.
- Prototype: `char *_strstr(char *haystack, char *needle);`

### 6. Chess is mental torture
Write a function that prints the chessboard.
- Prototype: `void print_chessboard(char (*a)[8]);`

### 7. The line of life is a ragged diagonal between duty and desire
Write a function that prints the sum of the two diagonals of a square matrix of integers.
- Prototype: `void print_diagsums(int *a, int size);`

### 8. Double pointer, double fun
Write a function that sets the value of a pointer to a char.
- Prototype: `void set_string(char **s, char *to);`

### 9. My primary goal of hacking was the intellectual curiosity, the seduction of adventure
Create a file that contains the password for the `crackme2` executable.

## Files

- `main.h`: Header file containing all function prototypes.
- `0-memset.c`: Function to fill memory with a constant byte.
- `1-memcpy.c`: Function to copy memory area.
- `2-strchr.c`: Function to locate a character in a string.
- `3-strspn.c`: Function to get the length of a prefix substring.
- `4-strpbrk.c`: Function to search a string for any of a set of bytes.
- `5-strstr.c`: Function to locate a substring.
- `6-print_chessboard.c`: Function to print the chessboard.
- `7-print_diagsums.c`: Function to print the sum of the two diagonals of a square matrix of integers.
- `8-set_string.c`: Function to set the value of a pointer to a char.
- `101-crackme_password`: File containing the password for the `crackme2` executable.

