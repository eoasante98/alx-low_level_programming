#include "main.h"
/**
 * clear_bit - sets value of bit to 0 at given index
 * @n: pointer 
 * @index: as is...
 * Return: 1 on success, -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (1);

	*n &= ~(1UL << index);
	return (1);
}
