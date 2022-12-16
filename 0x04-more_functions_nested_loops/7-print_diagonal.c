#include "main.h"
/**
 * print_diagonal - print a diagonal line
 * @n: Number of times to print
 * Return: void
 */
void print_diagonal(int n)
{
	int count1, count2;

	for (count1 = 0; count1 < n; count1++)
	{
		for (count2 = 0; count2 < count1; count2++)
			_putchar(' ');
		_putchar(92);
		if (count1 < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
