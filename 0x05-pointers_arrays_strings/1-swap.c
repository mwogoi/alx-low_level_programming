#include "main.h"
/**
 * swap_int - Swaps the values between 2 variables
 * @a: variable 1
 * @b: Second variable
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
