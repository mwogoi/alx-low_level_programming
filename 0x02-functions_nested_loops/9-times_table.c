# include "main.h"
/**
 * times_table -Prints the 9 times-table starting with zero
 * Return: the times table
 */
void times_table(void)
{
	int roww, columnn, productt;

	for (roww = 0; roww <= 9; roww++)
	{
		_putchar('0');

		for (columnn = 0; columnn <= 9; columnn++)
		{
			_putchar(',');
			_putchar(' ');

			productt = roww * columnn;

			if (productt <= 9)
				_putchar(' ');
			else
				_putchar((productt / 10) + '0');
			_putchar((productt % 10) + '0');
		}
		_putchar('\n');
	}
}
