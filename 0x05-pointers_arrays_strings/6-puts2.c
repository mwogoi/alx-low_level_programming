#include "main.h"
/**
 * puts2 - Print every other character
 * @str: The string
 * Return: void
 */
void puts2(char *str)
{
	int j, i;

	for (i = 0; (*(str + i) != '\0'); i++)
	{
		if (!(i % 2))
			_putchar(*(str + i));
	}
	_putchar('\n');
}
