#include "main.h"
/**
 * _islower - entry point
 *
 * Description: shows 1 for lowercase, 0 for others
 *
 * @c: ANSCII code
 *
 * Return: 1 for lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
