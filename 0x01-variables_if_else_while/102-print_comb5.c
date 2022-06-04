#include <stdio.h>
/**
 * main - Beginning of program
 *
 * Description: Print all possible combinations of two two_digit numbers
 *
 * Return: Return 0 success
 */
int main(void)
{
	int tens;
	int ones;


	for (tens = 0; tens <= 98; tens++)
	{
		for (ones = tens + 1; ones <= 99; ones++)
		{
			putchar((tens / 10) + '0');
			putchar((tens % 10) + '0');
			putchar(' ');
			putchar((ones / 10) + '0');
			putchar((ones % 10) + '0');

			if (tens == 98 && ones == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
