#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: The code prints alphabets in lowercase.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
