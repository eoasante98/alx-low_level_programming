#include "main.h"
/**
 * print_alphabet - entry point
 *
 * Description: prints the alphabet in lowercase, followed by a line
 *
 * Return: 0 (Success)
 */
void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
}
