#include "main.h"
/**
 * print_number - prints a number
 * @n: input int type
 * Return: void
 */
void print_number(int n)
{
	long i;
	long numb;
	int j;

	numb = n;
	if (numb < 0)
	{
		numb *= -1;
		_putchar('-');
	}
	i = 1;
	j = 1;
	while (j)
	{
		if (numb / (i * 10) > 0)
			i *= 10;
		else
			j = 0;
	}
	while (numb >= 0)
	{
		if (i == 1)
		{
			_putchar(numb % 10 + '0');
			numb = -1;
		}
		else
		{
			_putchar((numb / i % 10) + '0');
			i /= 10;
		}
	}
}
