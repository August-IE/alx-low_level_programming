#include "main.h"

/**
 * clear_bit - A function that sets the value of a bit to 0 at a given index.
 * @index: the index, starting from 0 of the desired bit
 * @n: A pointer to the set bit
 *
 * Return: -1 - If an error occured
 *         Otherwise - 1 at success.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	return (-1);

	*n &= ~(1 << index);

	return (1);
}
