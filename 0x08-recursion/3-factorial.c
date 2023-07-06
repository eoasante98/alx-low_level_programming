#include "main.h"
/**
 * factorial - returns the factorial of a given number
 * @n: input
 * Return: -1 if error, 1 if n = 0, factorial of n => 1
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
