#include "main.h"
/**
 * _isalpha - entry point
 *
 * @c: ANSCII code
 *
 * Return: 1 for letters, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
		return (1);
	else
		return (0);
	_putchar('\n');
}
