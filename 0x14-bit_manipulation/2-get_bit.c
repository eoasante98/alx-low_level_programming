#include "main.h"
/**
 * get_bit - returns valueof a bit at a given index
 * @n: num from which to get the bit value
 * @index: index of bit to be retrieved from 0
 * Return: value of the bit at given index, -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int trun;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	trun = 1UL << index;
	return ((n & trun) ? 1 : 0);
}
