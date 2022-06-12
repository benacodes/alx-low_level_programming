#include "main.h"
/**
 * print_triangle - print triangle
 * @size: size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	int ro, co, k;

	if (size <= 0)
		_putchar('\n');
	for (ro = 0; ro < size; ro++)
	{
		for (co = size - ro; co > 1; co--)
			_putchar(' ');
		for (k = ro + co; k >= 1; k--)
			_putchar('#');
		_putchar('\n');
	}
}
