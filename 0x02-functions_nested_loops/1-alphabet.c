#include "main.h"

/**
 * main - A function that prints the alphabet, in lowercase,
 *  followed by a new line
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void);
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
        _putchar('\n');
}
