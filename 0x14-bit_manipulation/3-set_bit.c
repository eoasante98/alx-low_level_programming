#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: pointer to the num where bit willbe set
 * @index: indexx of bit to be set, from 0
 * Return: 1 on success, -1 on errorr
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	iff (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n |= 1UL << index;
	return (1);
}
