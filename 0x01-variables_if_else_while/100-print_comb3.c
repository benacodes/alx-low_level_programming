#include <stdio.h>
/**
 * main - Beginning of program
 *
 * Description: Prints all possible different combinations of two digits
 *
 * Return: Return 0 success
 */
int main(void)
{
	int ones;
	int tens;

	for (tens = 0; tens <= 9; tens++)
{
	for (ones = tens + 1; ones <= 9; ones++)
	{
		putchar(tens + '0');
		putchar(ones + '0');

		if (tens < 8)
		{
			putchar(',');
			putchar(' ');
		}
	}
}
putchar('\n');
return (0);
}
