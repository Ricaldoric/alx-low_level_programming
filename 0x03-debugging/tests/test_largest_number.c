#include "../main.h"
#include <assert.h>
#include <stdio.h>

/**
 * main - entry point for tests of largest_number
 *
 * Return: 0 if all tests pass
 */
int main(void)
{
        assert(largest_number(1, 2, 3) == 3);
        assert(largest_number(3, 2, 1) == 3);
        assert(largest_number(-1, -2, -3) == -1);
        assert(largest_number(0, -5, -2) == 0);
        assert(largest_number(5, 5, 4) == 5);
        assert(largest_number(2, 3, 3) == 3);
        printf("All tests passed!\n");
        return (0);
}
