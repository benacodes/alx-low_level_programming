#include "main.h"
/**
 * print_alphabet_x10 - Prints 10 times the alphabet in lowercase
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	char c;

	for (c = "a"; c <= "z"; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
