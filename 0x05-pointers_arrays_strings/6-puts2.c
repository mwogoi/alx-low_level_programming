#include "main.h"
/**
 * puts2 - Print every other character
 * @str: The string
 * Return: void
 */
void puts2(char *str)
{
	int j, i;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < i; j = j + 2)
			_putchar(str[j]);
	}
	_putchar('\n');
}

