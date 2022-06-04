#include <stdio.h>
/**
 * main - Beginning of program
 *
 * Description: Print all possible combinations
 *
 * Return: Return 0 success
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar(num + '0');
	if (num < 9)
	{
	putchar(',');
	putcahr(' ');
	}
	}
	putchar('\n');
	return (0);

}
