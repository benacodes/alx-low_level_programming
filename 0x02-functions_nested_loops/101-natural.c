#include <stdio.h>

/**
 * main - Prints natural numbers below 1024 and multiples of 3 and 5
 *
 * Return: Return 0 success
 */

int main(void)
{
	int a, b;

	for (a = 1; a < 1024; a++)
	{
		if ((a % 3) == 0 || (a % 5) == 0)
		b += a;
	}
	printf("%d\n", b);
	return (0);

}
