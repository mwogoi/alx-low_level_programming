#include <stdio.h>
/**
 * main - Entry point
 * Description: Print single digit numbers below 10
 * Return: Always 0
 */
int main(void)
{
	int numb;

	for (numb = 0; numb < 10; numb++)
	{
		printf("%i", numb);
	}
	putchar('\n');
	return (0);
}
