#include <main.h>
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: char c
 *
 * Return: on success 1,
 * on error, it returns -1 and errno is set
 *
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

