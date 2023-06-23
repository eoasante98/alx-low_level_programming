#include "main.h"
/**
 * print_line - as said
 *
 * @n: input value taken
 *
 * Return: void
 */
void print_line(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar(10;
		}
	}
}
