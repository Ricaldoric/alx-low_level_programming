#include "main.h"
#include <stdlib.h>

/**
 * count_word - helper function to count the number of words in a string
 * @str: string to evaluate
 * Return: number of words
 */
int count_word(char *str)
{
	int i, count = 0, in_word = 0;

	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ')
			in_word = 0;
		else if (!in_word)
		{
			in_word = 1;
			count++;
		}
	}
	return (count);
}
/**
 * **strtow - splits a string into words
 * @str: string to split
 * Return: pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	char **array, *word;
	int i, j = 0, k = 0, words, word_len;

	if (str == NULL || *str == '\0')
		return (NULL);
	words = count_word(str);
	if (words == 0)
		return (NULL);
	/* Allocate memory for array of pointers (words) */
	array = malloc((words + 1) * sizeof(char *));
	if (array == NULL)
		return (NULL);
	for (i = 0; i < words; i++)
	{
		/* Skip spaces */
		while (str[j] == ' ')
			j++;
		/* Calculate word length */
		word_len = 0;
		while (str[j + word_len] != ' ' && str[j + word_len])
			word_len++;
		/* Allocate memory for each word */
		word = malloc((word_len + 1) * sizeof(char));
		if (word == NULL)
		{
			/* Free previously allocated words on failure */
			while (i--)
				free(array[i]);
			free(array);
			return (NULL);
		}
		/* Copy the word to the array */
		for (k = 0; k < word_len; k++)
			word[k] = str[j + k];
		word[k] = '\0';
		array[i] = word;
		j += word_len;
	}
	array[words] = NULL;
	return (array);
}
