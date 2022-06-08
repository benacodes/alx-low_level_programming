#include <stdio.h>
/**
 * print_to_98 - Function that prints all natural numbers
 *
 * @n: Integer number
 *
 * Return: void
 */

void print_to_98(int n)
{
	if (n > 98)
	{
	for (n > 98; n--)
	{
		printf("%d, ", n);
	}

	}
	else if (n < 98)
	{
		for (n < 98; n++)
		{
		print("%d, ", n);
		}
	}
	print("%d\n", n);
}
