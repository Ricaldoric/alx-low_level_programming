#include "main.h"

/**
 * print_chessboard - Prints the chessboard.
 * @a: The chessboard to be printed.
 */
void print_chessboard(char (*a)[8])
{
    int row, col;  /* Initialize indices for row and column */

    /* Iterate through the rows of the chessboard */
    for (row = 0; row < 8; row++)
    {
        /* Iterate through the columns of the chessboard */
        for (col = 0; col < 8; col++)
            _putchar(a[row][col]);  /* Print each character */

        _putchar('\n');  /* Print a new line after each row */
    }
}
