#include <stdio.h>
/**
 * main - Beginning of program
 *
 * Description: Smile in the mirror
 *
 * Return: Return 0 success
 */
int main(void)
{
	int reverse;

	for (reverse = 'z'; reverse >= 'a'; reverse--)
	{
		putchar(reverse);
	}
	putchar('\n');
	return (0);
}
