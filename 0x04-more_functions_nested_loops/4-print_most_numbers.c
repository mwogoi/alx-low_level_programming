#include "main.h"
/**
 * print_most_numbers - Print numbers btwn 0 and 9 excluding 2 and 4
 * Return: void
 */
void print_most_numbers(void)
{
	int counter;

	for (counter = 48; counter <= 57; counter++)
	{
		if (counter != 50 && counter != 52)
			_putchar(counter);
	}
	_putchar('\n');
}
