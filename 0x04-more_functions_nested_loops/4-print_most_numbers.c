#include "main.h"
/**
 * print_most_numbers - as said
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int i;

	for (i = 47; i < 58; i++)
	{
		if (i != '2' || i != '4')
			_putchar(i);
	}
	_putchar(10);
}
