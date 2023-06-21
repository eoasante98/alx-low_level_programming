#include "main.h"
/**
 * times_table - entry point
 *
 * Return: nothing
 *
 */
void times_table(void)
{
	int m, n, p;

	for (m = 0; m < 10; m++)
	{
		_putchar(48);
		for (n = 1; n < 10; n++)
		{
			p = m * n;
			_putchar(44);
			_putchar(32);
			if (p < 10)
			{
				_putchar(32);
				_putchar(p + 48);
			}
			else
			{
				_putchar((p / 10) + 48);
				_putchar((p % 10) + 48);
			}
		}
		_putchat('\n');
	}
}
