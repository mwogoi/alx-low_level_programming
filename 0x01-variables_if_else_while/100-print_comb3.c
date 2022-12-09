#include <stdio.h>
/**
 * main - entry point
 * Description: Print a combination of 2 single numbers in ascending.
 *		Using putchar only.
 * Return: Always 0
 */
int main(void)
{
	int digit1, digit2;

	for (digit1 = 0; digit1 < 9; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 < 9; digit2++)
		{
			putchar((digit1 % 10) + '0');
			putchar((digit1 % 10) + '0');
		}
	}
	putchar('\n');
	return (0);
}
