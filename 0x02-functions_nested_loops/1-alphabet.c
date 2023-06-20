#include "main.h"

/**
 * main - A function that prints the alphabet, in lowercase,
 *  followed by a new line
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char lowercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	_putchar(lowercase);
	_putchar('\n');
}
