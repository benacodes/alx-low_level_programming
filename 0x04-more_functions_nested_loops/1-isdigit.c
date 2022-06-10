#include "main.h"

/**
 * _isdigit - check for digit
 * @c: checks for digit
 * Return: 1 for digit, 0 for others
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
