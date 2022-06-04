#include <stdio.h>
/**
 * main - Beginning of program
 *
 * Description: Print all possible different combinations of three digits
 *
 * Return: Return 0 success
 */
int main(void)
{
	int ones;
	int tens;
	int hunds;

	for (hunds = 0; hunds <= 9; hunds++)
	{
		for (tens = hunds + 1; tens <= 9; tens++)
		{
			for (ones = tens + 1; ones <= 9; ones++)
			{
				putchar(hunds + '0');
				putchar(tens + '0');
				putchar(ones + '0');

				if (hunds < 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
