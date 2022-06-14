#include "main.h"
/**
 * _strcpy - String copy
 * @src: src
 * @dest: buffer to copy the string
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index] != '\0'; index++)
	{
		dest[index] = src[index];
	}
	dest[index] = '\0';

	return (dest);
}
