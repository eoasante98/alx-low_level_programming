#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	int m, n;

	for (m = 1; m < 1024; m++)
	{
		if ((m % 3) == 0 || (m % 5) == 0)
			n += m;
	}
	printf("%d\n", n);
	return (0);
}
