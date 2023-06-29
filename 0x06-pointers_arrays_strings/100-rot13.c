#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *a;

	a = rot13("Hello, World");
	printf("%s\n", a);
	return (0);
}
