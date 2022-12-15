#include "main.h"

/**
 * _isupper - checks for upper and lower case parameters
 * @c: character being checked
 * Return: 1 if uppercase 0 else
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
