#include "main.h"
/**
 * print_times_table - print the times table upto n times but not above 15
 * @n: The degree of the times table
 * Return: Always 0
 */
void print_times_table(int n)
{
	int roww, columnn, productt;

	if (n > 15 || n < 0)
		continue;
	else
	{
		for (roww = 0; roww < 15; roww++)
		{
			_putchar('0');

			for (columnn = 1; columnn < 15; columnn++)
			{
				_putchar(',');
				_putchar(' ');

				productt = roww * columnn;

				if (productt < n)
					_putchar(' ');
				else
					_putchar((productt / 100) + '0');
				_putchar((productt / 10) + '0');
				_putchar((productt % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
