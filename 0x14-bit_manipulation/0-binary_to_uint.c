#include "main.h"

/**
 * binary_to_uint - A function that converts a binary number to an unsigned int
 * @b: A pointer pointing to a string of 0 and 1 chars.
 *
 * Return: 0 - If b is NULL or if there is one or more chars in the
 * 		string b that is not 0 or 1.
 *         Otherwise - the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, mult = 1;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i];)
		i++;

	for (i -= 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		num += (b[i] - '0') * mult;
		mult *= 2;
	}

	return (num);
}
