#include "main.h"
/**
 * reverse_array - reverse the array of an integer
 * @a: the Array
 * @n: Number of elements in the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int count;
	int hold;

	for (count = 0; count < n--; count++)
	{
		hold = a[count];
		a[count] = a[n];
		a[n] = hold;
	}
}
