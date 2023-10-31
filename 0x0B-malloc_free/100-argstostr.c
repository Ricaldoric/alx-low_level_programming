#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments of your program
 * @ac: argument count
 * @av: argument vector
 * Return: pointer to the new string, or NULL on failure
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k = 0, len = 0;
	/* Check if argument count is 0 or argument vector is NULL */
	if (ac == 0 || av == NULL)
		return (NULL);
	/* Calculate the total length of all arguments including '\n' */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
		len++;
	}
	/* Allocate memory for the new string */
	str = malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	/* Concatenate arguments to the new string */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			str[k++] = av[i][j];
		str[k++] = '\n';
	}
	str[k] = '\0';
	return (str);
}
