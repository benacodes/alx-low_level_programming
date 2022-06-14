#include "main.h"
/**
 * swap_int - swap two integers
 * @a: first integer
 * @b: second integer
 * Return: swapped integers
 */
void swap_int(int *a, int *b)
{
	int d;

	d = *a;
	*a = *b;
	*b = d;
}
