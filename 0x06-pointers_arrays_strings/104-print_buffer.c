#include "main.h"
#include <stdio.h>
/**
 * print_buffer -  prints the content of the buffer
 * @b: pointer to the buffer
 * @size: size of the buffer
 * Return: void
 */
void print_buffer(char *b, int size)
{
	if (size <= 0)
	{
		printf("\n");
		return;
	}

	int i, j;
	unsigned char *p = (unsigned char *)b;

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);

		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
				printf("%02x", p[i + j]);
			else
				printf(" ");

			if (j % 2 != 0)
				printf(" ");
		}

		for (j = 0; j < 10; j++)
		{
			if (i + j >= size)
				break;

			if (p[i + j] >= 32 && p[i + j] <= 126)
				printf("%c", p[i + j]);
			else
				printf(".");
		}
		printf("\n");
	}
}
