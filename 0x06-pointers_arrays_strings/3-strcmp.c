#include "main.h"
/**
 * _strcmp - compare 2 string values
 * @s1: points to the first string
 * @s2: points to the second string
 * Return: s1[] -s2[]
 */
int _strcmp(char *s1, char *s2)
{
	int count;

	count = 0;
	while (s1[count] != '\0' && s2[count] != '\0')
	{
		if (s1[count] != s2[count])
			return (s1[count] - s2[count]);
		count++;
	}

	return (0);
}
