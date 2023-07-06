#include "main.h"
/**
 * is_prime - detects if a number is a prime  number
 * @n: input
 * @c: iterator
 * Return: 1 if n = prime, 0 if otherwise
 */
int is_prime(unsigned int n, unsigned int c)
{
	if (n % c == 0)
	{
		if (n == c)
			return (1);
		else
			return (0);
	}
	return (0 + is_prime(n, c + 1));
}
/**
 * is_prime_number - detect if input is a primr number
 * @n: input
 * Return: 1 if input is a prime number, 0 if otherwise
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (is_prime(n, 2));
}
