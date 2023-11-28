# File I/O in C - Project Overview

## Project Description
This project focuses on demonstrating fundamental file I/O operations in C programming. It includes tasks such as reading from files, creating new files, appending text to existing files, and copying content from one file to another. These operations are fundamental in understanding how to interact with the file system using the C programming language.

## Environment
- Developed and tested on Ubuntu 14.04 LTS
- Compiled with gcc, using the flags `-Wall -pedantic -Werror -Wextra -std=gnu89`


## Featured Tasks
1. **Read Text File (`0-read_textfile.c`)**:
   - Reads a specified number of characters from a text file and prints them to the POSIX standard output.
   - Prototype: `ssize_t read_textfile(const char *filename, size_t letters);`

2. **Create File (`1-create_file.c`)**:
   - Creates a file with specified permissions and writes a provided string to it.
   - Prototype: `int create_file(const char *filename, char *text_content);`

3. **Append Text to File (`2-append_text_to_file.c`)**:
   - Appends a string at the end of a text file.
   - Prototype: `int append_text_to_file(const char *filename, char *text_content);`

4. **Copy File Content (`3-cp.c`)**:
   - Copies the content of one file to another.
   - Usage: `./cp file_from file_to`

5. **Display ELF Header Info (`100-elf_header.c`)**:
   - Displays information contained in the ELF header of an ELF file.
   - Usage: `./elf_header elf_filename`

## Usage
Each executable takes different command line arguments. Refer to the source file for specific usage instructions.

## Author:
Moffat Mochama Ombasa
11/28/2023
