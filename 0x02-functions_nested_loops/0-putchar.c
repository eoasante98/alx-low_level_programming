#include "main.h"
/**
 * main - entry point
 *
 * Description: prints _putchar, followed by a new line.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char text[] = "_putchar";
	int i;

	for (i = 0; i < sizeof(text) - 1; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');
	return (0);
}
