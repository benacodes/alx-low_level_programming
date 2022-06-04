#include <stdio.h>
/**
 * main - Beginning of program
 *
 * Description: Print alphabet
 *
 * Return: Return 0 success
 */

int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
