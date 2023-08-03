#include "main.h"

/**
 * get_endianness - A function that hecks the endianness.
 *
 * Return: 0 - If big-endian
 *         1 - If little-endian
 */
int get_endianness(void)
{
	int num = 1;
	char *endian = (char *)&num;

	if (*endian == 1)
		return (1);

	return (0);
}
