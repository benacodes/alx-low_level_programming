#include "main.h"
/**
 * _strncpy - Copies n bytes of src to the dest string
 * @dest: String to copy to
 * @src: String being copied
 * @n: Largest number of bytes to copy
 * Return: Dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && *(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}
