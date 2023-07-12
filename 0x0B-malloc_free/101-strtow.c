#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
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

	while (...

	for (k = 0; k < i; k++)
		array[k] = str[k];
	i = k;
	for (k = 0; k < j; k++)
	{
		array[i] = str[k];
		i++;
	}
	array[i] = '\0';
	return (NULL);
}
