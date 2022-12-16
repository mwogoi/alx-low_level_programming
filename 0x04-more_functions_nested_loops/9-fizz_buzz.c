#include "main.h"
#include <stdio.h>
/**
 * main - Prints buzz each of 3 and 5
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (!(i % 15))
			printf("FizzBuzz");
		else if (!(i % 3))
			printf("Fizz");
		else if (!(i % 5))
			printf("Buzz");
		else
			print_number_simple(i);
		if (i != 100)
			_putchar(' ');
	}
	printf('\n');
	return (0);
}
