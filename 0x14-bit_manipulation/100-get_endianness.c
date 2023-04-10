#include "main.h"

/**
 * get_endianness - check machine either little or big endian
 * Return: 0 for big or 1 for little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
