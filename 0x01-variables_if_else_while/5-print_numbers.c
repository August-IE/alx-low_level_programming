#include <stdio.h>
/**
 * main - A program that prints all single digit
 * numbers of base 10 starting from 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		printf("%d", n);
	}
	printf("\n");
	return (0);
}
