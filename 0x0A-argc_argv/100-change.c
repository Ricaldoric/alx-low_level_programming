#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 if successful, 1 if error
 *
 * Description: Calculates the minimum number of coins to
 * make change for a given amount of money.
 */
int main(int argc, char *argv[])
{
	int cents, coins = 0;
	/* Validate argument count */
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	/* Convert argument to integer */
	cents = atoi(argv[1]);
	/* Handle negative amounts */
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	/* Calculate coins for each denomination */
	coins += cents / 25;
	cents %= 25;
	coins += cents / 10;
	cents %= 10;
	coins += cents / 5;
	cents %= 5;
	coins += cents / 2;
	cents %= 2;
	coins += cents;
	/* Print result */
	printf("%d\n", coins);
	return (0); /* Success */
}
