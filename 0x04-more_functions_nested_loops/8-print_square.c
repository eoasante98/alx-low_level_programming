#include "main.h"
/**
 * print_square - prints square, followed by a line
 *
 * @size: input's container
 *
 * Return: size
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < (size - 1); j++)
			{
				_putchar(35);
			}
			_putchar(35);
			_putchar(10);
		}
	}
}
