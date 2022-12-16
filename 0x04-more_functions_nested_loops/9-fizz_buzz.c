#include "main.h"
#include <stdio.h>
/**
 * main - Prints buzz each of 3 and 5
 * Return: Always 0
 */
int main(void)
{
	int numb;

	for (numb = 1; numb <= 100; numb++)
	{
		if (numb % 3 == 0 && numb % 5 == 0)
			printf("FizzBuzz");
		else if (numb % 3 == 0 && numb % 5 != 0)
			printf("Fizz");
		else if (numb % 3 != 0 && numb % 5 == 0)
			printf("Buzz");
		else if (numb == 1)
			printf("%d", numb);
		else
			printf("%d", numb);
	}
	printf("\n");
	return (0);
}

