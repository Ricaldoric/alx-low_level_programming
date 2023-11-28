#include "main.h"

/* Main program to display ELF header information */
int main(int argc, char *argv[])
{
    int fd; /* File descriptor */
    Elf64_Ehdr header; /* ELF header structure */

    /* Check correct number of arguments */
    if (argc != 2) {
        fprintf(stderr, "Usage: elf_header elf_filename\n");
        exit(98);
    }

    /* Open ELF file */
    fd = open(argv[1], O_RDONLY);
    if (fd < 0)
        error_exit(argv[1], 98);

    /* Read ELF header */
    if (read(fd, &header, sizeof(header)) != sizeof(header))
        error_exit(argv[1], 98);

    /* Validate ELF file and display header */
    if (is_elf(header))
        display_elf_header(header);
    else
        error_exit(argv[1], 98);

    /* Close file */
    close(fd);

    return (0);
}

/* Function to display error message and exit */
void error_exit(const char *filename, int status)
{
    fprintf(stderr, "Error: %s\n", filename);
    exit(status);
}

/* Function to check if file is ELF */
int is_elf(Elf64_Ehdr header)
{
    return (memcmp(header.e_ident, ELFMAG, SELFMAG) == 0);
}

/* Function to display ELF header */
void display_elf_header(Elf64_Ehdr header)
{
    /* Print ELF header information */
    printf("ELF Header:\n");
    printf("  Magic:   ");
    for (int i = 0; i < EI_NIDENT; i++)
        printf("%02x ", header.e_ident[i]);
    printf("\n");
    /* Additional header information display */
}

/* Define ELF header structure and constants as needed */

