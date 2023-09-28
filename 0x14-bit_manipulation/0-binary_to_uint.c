#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to string
 * Return: converted num, 0 if invalid char, b if NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int output = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);

		output <<= 1;
		if (*b == '1')
			output |= 1;
		b++;
	}
	return (output);
}
