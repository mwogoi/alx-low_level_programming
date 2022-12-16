#include "main.h"
/**
 * print_line - print a straigt line
 * @n: length of line
 * Return: always 0
 */
void print_line(int n)
{
	int counter;

	for (counter = 0; counter < n; counter++)
		_putchar('_');
	_putchar('\n');
}
