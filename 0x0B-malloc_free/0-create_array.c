#include "main.h"
#include <stdlib.h>
/**
 * create_array - create an array
 * @size: size of the array
 * @c: character
 * Return: array or NUull if size is 0
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ar = malloc(size * sizeof(char));

	if (ar == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ar[i] = c;

	return (ar);
}
