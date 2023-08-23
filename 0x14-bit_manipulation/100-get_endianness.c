#include <stdio.h>
#include "main.h"

int main(void)
{
	int u;

	u = get_endianness();
	if (u != 0)
	{
		printf("Little Endian\n");
	}
	else
	{
		printf("Big Endian\n");
	}
	return (0);
}
