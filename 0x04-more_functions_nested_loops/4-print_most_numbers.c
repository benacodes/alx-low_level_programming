#include "main.h"
/**
 * print_most_numbers - Print numbers except 2&4
 * Return: 0-9 without 4 & 2
 */
void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if ((i == '2') || (i == '4'))
			continue;
		else
			_putchar(i);
	}
	_putchar('\n');
}
