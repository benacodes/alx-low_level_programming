#include "main.h"
/**
 * _strcat - Function that concatenates two strings
 * @src: Input string
 * @dest: Input string
 * Return: Dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = j = 0;
	while (*(dest + i))
	{
		i++;
	}
	while ((*(dest + i) = *(src + j)))
	{
		i++;
		j++;
	}
	return (dest);
}
