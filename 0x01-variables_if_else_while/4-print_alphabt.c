#include <stdio.h>
/**
 * main -Entry point
 *
 * Description: Code prints all alphabetbs except q and e.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
