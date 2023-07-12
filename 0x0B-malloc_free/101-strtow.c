#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * count_words - ...
 * @str: string
 * Return: ...
 */
static int count_words(char *str)
{
	int words = 0;
	unsigned int i, len;

	len = strlen(str);

	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			words++;
	}
	return (words);
}
/**
 * allocate_array - ..
 * @words: number of words
 * Return: pointer
 */
static char **allocate_array(int words)
{
	char **array;

	array = malloc((words + 1) * sizeof(char *));
	if (array == NULL)
		return (NULL);
	
	return (array);
}

/**
 * copy_word - ...
 * @str: input string
 * @start: ...
 * @end: ending index of copied word
 * Return: pointer to the copied word
 */
static char *copy_word(char *str, unsigned int start, unsigned int end)
{
	unsigned int length = end - start;
	char *word;

	word = malloc((length + 1) * sizeof(char));
	if(word == NULL)
		ret
/**
 * strtow - concatenates arguments
 * @str: string to be split
 * Return: pointer to string array
 */
char **strtow(char *str)
{
	char **array;
	unsigned int i, j, k, len;
	int words = 0;

	if (str == NULL || *str == '\0')
		return (NULL);

	len = strlen(str);

	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			words++;
	}

	array = malloc((words + 1) * sizeof(char *));
	if (array == NULL)
		return (NULL);

	i = 0;
	j = 0;

	while (str[j] == ' ')
		j++;

	while (j < len)
	{
		k = j;
		while (str[k] != ' ' && str[k] != '\0')
			k++;

		array[i] = malloc((k - j + 1) * sizeof(char));
		if (array[i] == NULL)
		{
			for (k = 0; k < i; k++)
				free(array[k]);
			free(array);
			return (NULL);
		}

		strncpy(array[i], str + j, k - j);
		array[i][k - j] = '\0';

		i++;

		j = k;
		while (st[j] == ' ')
			j++;
	}
	array[i] = NULL;
	return array;
}
