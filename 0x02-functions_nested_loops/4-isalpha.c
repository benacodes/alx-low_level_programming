#include "main.h"
/**
 * _isalpha - Function that checks for alphabetic character
 *
 * @c: representing alphabet
 *
 * Return: Returns 1 for letters. returns 0 for otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
	return (1);
	}
	else
	{
	return (0);
	}
	_putchar('\n');
}
