#include "main.h"
/**
 * print_last_digit - Function that prints last digit of a number
 *
 * @n: Collects last digit
 *
 * Return: Last digit
 */

int print_last_digit(int n)
{
	int ld;

	ld = n % 10;
	if (ld < 0)
	{
		_putchar(-ld + 48);
	return (-ld);
	}
	else
	{
		_putchar(ld + 48);
	return (ld);
	}
}
