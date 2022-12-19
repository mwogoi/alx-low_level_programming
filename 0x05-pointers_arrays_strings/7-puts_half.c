#include "main.h"
/**
 * puts_half - Prints half the string
 * @str: The string to be printed
 * Return: void
 */
void puts_half(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
		i++;
	if (i % 2 == 0)
	{
		i = i / 2;
	}
	else
		i = (i + 1) / 2;
	while (str[i] != '\0')
	{
		i++;
	       _putchar(str[i]);
	}
	_putchar('\n');
}
