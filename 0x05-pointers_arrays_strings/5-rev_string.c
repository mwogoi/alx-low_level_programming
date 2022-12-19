#include "main.h"
/**
 * rev_string - reversing a string
 * @s: The string to be  tested
 * Return:  void
 */
void rev_string(char *s)
{
	int i, j, length, hold;

	i = 0;
	while (s[i] != '\0')
		i++;
	length = i;
	i = 0;
	j = length - 1;
	while (i < j)
	{
		hold = s[i];
		s[i] = s[j];
		s[j] = hold;
		i++;
		j--;
	}
}
