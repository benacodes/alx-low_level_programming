#include <stdio.h>
/**
 * main -Beginning of program
 *
 * Description: Hexadecimal
 *
 * Return: Return 0 success
 */
int main(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
		putchar(num);
	for (num = 'a'; num <= 'f'; num++)
		putchar(num);
	putchar('\n');
	return (0);
}
