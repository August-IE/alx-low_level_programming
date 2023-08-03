#include "main.h"

/**
 * flip_bits - A function that returns the number of bits you would need
 *		to flip to get from one number to another.
 * @n: the number needed to be flipped
 * @m: the resultant number after n has been flipped
 *
 * Return: number of flipped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int value = n ^ m, flip_bits = 0;

	while (value > 0)
	{
		flip_bits += (value & 1);
		value >>= 1;
	}

	return (flip_bits);
}
