#include "main.h"
/**
 * _strlen - length of a string
 * @s: string to check
 * Return: length of string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
