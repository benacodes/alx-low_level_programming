#include <stdio.h>
/**
 * main - Print 1 - 100
 *
 * 3 multiplies print fizz instead of number
 * 5 multples print buzz instead of number
 * 3 and 5 multiples print fizzbuzz
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 1; i < 100; i++)
		if (i % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	printf("Buzz");
	printf("\n");
	return (0);
}
