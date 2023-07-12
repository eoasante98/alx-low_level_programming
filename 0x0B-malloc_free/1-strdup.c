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
	unsigned int l, i;
	char *s;

	if (str == NULL)
		return (0);

	for (i = 0; str[i] != '\0'; i++)
		;

	s = malloc(sizeof(char) * l + 1);

	if (s == 0)
		return (0);

	for (j = 0; j <= l; j++)
	{
		*(s + j) = *(str + j);
	}
	return (s);
}
