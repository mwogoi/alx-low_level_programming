#include "main.h"
/**
 * more_numbers - print 1 - 14 10 times
 * Return: void
 */
void more_numbers(void)
{
	int counter;
	char number;

	counter = 0;

	for (counter = 0; counter < 10; counter++)
	{
		for (number = 0; number <= 14; number++)
		{
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
		}
	}
}
