#include "main.h"
/**
 * print_sign - Prints the numbers sign
 * @n: The number whose sign is to be printed
 * Return: 1 if number is greater than zero else return 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
