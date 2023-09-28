#include "main.h"


/**
 * get_endianness - checks endianness of the system
 * Return: 0 if big endian, 1 if little
 */
int get_endianness(void)
{
	unsigned int v = 1;
	char *endian = (char *)&v;

	return (*endian == 1);
}
