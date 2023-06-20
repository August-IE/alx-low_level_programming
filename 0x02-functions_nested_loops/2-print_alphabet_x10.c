#include "main.h"

/**
 * print_alphabet_x10 - A function that Prints 10 times the alphabet,
 * in lowercase followed by a new line
 * Return: void
 */
void print_alphabet_x10(void);
{
	int i = 0;
	char lowercase;

	while (i++ <= 9)
	{
		for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
			_putchar(lowercase);
		_putchar('\n');
	}
}
