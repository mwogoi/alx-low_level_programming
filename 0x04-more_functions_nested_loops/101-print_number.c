#include "main.h"
/**
 * print_number - prints a number
 * @n: input int type
 * Return: void
 */
void print_number(int n)
{
	unsigned int numb1;

	if (n < 0)
	{
		numb1 = -n;
		_putchar('-');
	}
	else
		numb1 = n;
	if (numb1 / 10)
		print_number(numb1 / 10);
	_putchar((numb1 % 10) + '0');

