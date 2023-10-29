# Static Library Project

## Description

This project involves creating a static library containing a variety of functions that perform various operations, such as string manipulation, memory manipulation, character checking, and more. The library is compiled with a set of specific GCC flags to ensure strict code standards.

## Files

- **string_functions.c**: Contains functions related to string manipulation.
  - `_strlen`: Calculates the length of a string.
  - `_strcpy`: Copies a string from source to destination.
  - `_strcat`: Concatenates two strings.
  - `_strncat`: Concatenates two strings, using at most `n` bytes from source.
  - `_strncpy`: Copies a string, using at most `n` bytes.

- **memory_functions.c**: Contains functions related to memory manipulation.
  - `_memset`: Fills the first `n` bytes of the memory area pointed to by `s` with the constant byte `b`.
  - `_memcpy`: Copies `n` bytes from memory area `src` to memory area `dest`.
  - `_strchr`: Locates the first occurrence of `c` in the string pointed to by `s`.
  - `_strpbrk`: Locates the first occurrence in the string `s` of any of the bytes in the string `accept`.
  - `_strstr`: Locates a substring.

- **char_functions.c**: Contains functions dealing with individual characters.
  - `_putchar`: Writes a character to stdout.
  - `_islower`: Checks for lowercase character.
  - `_isupper`: Checks for uppercase character.
  - `_isdigit`: Checks for a digit (0 through 9).
  - `_isalpha`: Checks for an alphabetic character.

- **misc_functions.c**: Contains miscellaneous functions.
  - `_abs`: Computes the absolute value of an integer.
  - `_atoi`: Converts a string to an integer.
  - `_strcmp`: Compares two strings.
  - `_strspn`: Gets the length of a prefix substring.
  - `_puts`: Prints a string to stdout, followed by a new line.

- **main.h**: Header file containing the prototypes of all functions used in the project.

- **libmy.a**: The static library containing all the compiled functions.

## Compilation

The functions are compiled with the following GCC flags: `-Wall -Werror -Wextra -pedantic -std=gnu89`.

## Usage

To use the functions in the static library, include the header file `main.h` in your program and link against the static library `libmy.a` during compilation.

## Author

Moffat Ombasa
