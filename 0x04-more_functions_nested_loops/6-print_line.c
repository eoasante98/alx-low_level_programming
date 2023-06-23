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
			_putchar(95);
		}
		_putchar(10);
	}
}
