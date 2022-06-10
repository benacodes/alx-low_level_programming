#include "main.h"
/**
 * _isupper - checks for uppercase character
 * @c: Character that is checked
 * Return: Return 1 if uppercase otherwise 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	return (1);
	return (0);
}
