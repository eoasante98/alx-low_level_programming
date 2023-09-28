#include "main.h"

/**
 * print_binary - prints binary form of a num
 * @n: number to be printed in binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int turn = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int skip = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (turn)
	{
		if (n & turn)
		{
			_putchar('1');
			skip = 1;
		}
		else if (skip)
			_putchar('0');

		turn >>= 1;
	}
}
