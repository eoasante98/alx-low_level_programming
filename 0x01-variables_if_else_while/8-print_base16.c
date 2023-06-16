#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints hexadecimals in lowercase
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0x61; i <= 0x7A; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
