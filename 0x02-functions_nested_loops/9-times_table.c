#include "main.h"
/**
 * times_table - Function that prints nine times table
 *
 * Return: void
 */

void times_table(void)
{
	int m, n, o;

	for (m = 0; m <= 9; m++)
	{
		_putchar(48);
		for (n = 1; n <= 9; n++)
		{
			o = m * n;
			_putchar(44);
			_putchar(32);
			if (c <= 9)
			{
				_putchar(32);
				_putchar(c + 48);
			}
			else
			{
				_putchar((c / 10) + 48);
				_putchar((c % 10) + 48);
			}
		}
	_putchar('\n');
	}
}
