#include <stdio.h>
#include "main.h"
/**
 * print_array - Print n elements of an array
 * @a: pointer to the array
 * @n: The Array.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
		printf("%d", a[i]);
	if (i < n - 1)
		printf(", ");
	_putchar('\n');
}
