#include "main.h"
/**
 * print_alphabet_x10 - Prints 10 times the alphabet in lowercase
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int i, c;

	for (i = 0; i <= 9; i++)

	for (c = 97; c <= 122; c++)
	{
		_putchar(c);
	}
	{
		_putchar('\n');
	}
}
