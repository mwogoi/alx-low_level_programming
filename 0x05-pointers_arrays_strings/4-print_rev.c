#include "main.h"
/**
 * print_rev - print a string in reverse
 * @s: characters
 * Return: void
 */
void print_rev(char *s)
{
	int i;

	while (s[i] != 0)
		i++;
	while (i > 0)
	{
		i--;
		_putchar(s[i]);
	}
	_putchar('\n');
}
