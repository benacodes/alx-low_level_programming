#include "main.h"
/**
 * print_line - Prints a straight line
 * @n: number of times
 * Return: 0
 */
void print_line(int n)
{
	int nn;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (nn = 1; nn <= n; nn++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
