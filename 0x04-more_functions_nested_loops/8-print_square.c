#include "main.h"
/**
 * print_square - Print squares form slashes
 * @size: size square lenth
 * Return: void
 */
void print_square(int size)
{
	int count1, count2;

	for (count1 = 0; count1 = size; count1++)
	{
		for (count2 = 0; count2 = size; count2++)
			_putchar('#');
		if (count1 != (size - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
