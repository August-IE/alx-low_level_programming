#include "main.h"

/**
 * get_bit - A function that returns the value of a bit at a given index.
 * @index: the index, starting from 0 of the desired bit
 * @n: the required bit
 *
 * Return: -1 - If an error occured
 *         Otherwise - the value of the bit at index index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

        return (1);
}
