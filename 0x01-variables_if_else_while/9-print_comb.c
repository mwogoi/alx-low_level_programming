#include <stdio.h>
/**
 * main - Entry point
 * Description: Print all possible combination of single digit numbers using putchar
 * Return: Always 0
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		if (i < 10)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
