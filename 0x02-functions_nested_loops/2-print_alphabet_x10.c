#include "main.h"
/**
 * print_alphabet_x10 - entry point
 *
 * Description: prints allphabets 10x
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 97; b < 123; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
	}
}

