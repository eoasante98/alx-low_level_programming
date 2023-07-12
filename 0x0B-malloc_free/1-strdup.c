#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns pointer to newly allocated space
 * @str: string
 * Return: pointer
 */
char *_strdup(char *str)
{
	unsigned int j, i;
	char *s;

	if (str == NULL)
		return (0);

	for (i = 0; str[i] != '\0'; i++)
		;

	s = (char *)malloc(sizeof(char) * (i + 1));

	if (s == 0)
		return (0);

	for (j = 0; j <= i; j++)
	{
		*(s + j) = *(str + j);
	}
	return (s);
}
