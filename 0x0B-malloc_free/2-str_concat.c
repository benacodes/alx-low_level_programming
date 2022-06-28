#include <stdlib.h>
#include "main.h"
/**
 * str_concat - concatenate two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to s1 or NULL
 */
char *str_concat(char *s1, char *s2)
{
	int i, k = 0, len = 0;
	char *ar;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	ar = malloc(sizeof(char) * len);
	if (ar == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
	{
		ar[k++] = s1[i];
	}
	for (i = 0; s2[i]; i++)
	{
		ar[k++] = s2[i];
	}

	return (ar);
}
