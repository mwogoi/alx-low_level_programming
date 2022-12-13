#include "main.h"
/**
 * print_last_digit - Printing the last digit of a number
 * @numb: The number to be checked
 * Return: The last number
 */
int print_last_digit(int numb)
{
	int lastdigit = numb % 10;

	if (lastdigit < 0)
		lastdigit *= -1;
	_putchar(lastdigit + '0');

	return (lastdigit);
}
