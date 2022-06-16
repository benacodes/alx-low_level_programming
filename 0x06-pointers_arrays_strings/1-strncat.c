#include "main.h"
/**
 * _strncat - Appends src to the dest string
 * @dest: string to append by src
 * @src: String to append to dest
 * @n: Largest number of bytes to append
 * Return: Dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = j = 0;
	while (*(dest + i))
		i++;
	while (j < n && *(src + j))
	{
		*(dest + i) = *(src + j)
		i++;
		j++;
	}
	if (j < n)
		*(dest + i) = *(src + j);
	return (dest);
}
