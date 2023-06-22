#include "main.h"
/**
 * print_line - as said
 *
 * Return: void
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (int i = 0; i <= n; i++)
			_putchar("_");
	}
}
