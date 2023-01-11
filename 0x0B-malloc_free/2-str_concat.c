#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: pointer to string
 * @s2: pointer to string
 * Return: pointer to newly formed string else null if failed
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int len1, len2, size, i, j;
	char *newstring;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = 0;
	while (s1[len1] != '\0')
		len1++;
	len2 = 0;
	while (s2[len2] != '\0')
		len2++;
	size = len1 + len2;
	newstring = malloc((sizeof(char) * size) + 1);
	if (newstring == NULL)
		return (NULL);
	i = 0;
	while (i < len1)
	{
		newstring[i] = s1[i];
		i++;
	}
	j = 0;
	while (i <= size)
	{
		newstring[i] = s2[j];
		i++;
		j++;
	}
	return (newstring);
}
