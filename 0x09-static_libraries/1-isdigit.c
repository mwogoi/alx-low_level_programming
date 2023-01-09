#include "main.h"
/**
 * _isdigit - Checks for digits between 0 and 9
 * @c: Input being checked
 * Return: 1 if it is a digit and 0 is it's not
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
