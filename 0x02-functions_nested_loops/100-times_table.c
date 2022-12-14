#include "main.h"
/**
 * print_times_table - print the times table upto n times but not above 15
 * @n: The degree of the times table
 * Return: Always 0
 */
void print_times_table(int n)
{
	int roww, columnn, productt;

	if (n >= 0 && n <= 15)
	{
		for (roww = 0; roww <= n; roww++)
		{
			_putchar('0');

			for (columnn = 1; columnn <= n; columnn++)
			{
				_putchar(',');
				_putchar(' ');

				productt = roww * columnn;

				if (productt <= 99)
					_putchar(' ');
				if (productt <= 9)
					_putchar(' ');
				if (productt >= 100)
				{
					_putchar((productt / 100) + '0');
					_putchar(((productt / 10)) % 10 + '0');
				}
				else if (productt <= 99 && productt >= 10)
					_putchar((productt / 10) + '0');
				_putchar((productt % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
