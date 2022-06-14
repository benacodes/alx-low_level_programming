#include "main.h"
/**
 * _strlen - length of string
 * @s: character
 * Return: length
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
