#include "main.h"
/**
 * _strlen -  Returns length of string
 * @s: String to count
 *
 * Return: length
 */
int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}

	return (c);
}
