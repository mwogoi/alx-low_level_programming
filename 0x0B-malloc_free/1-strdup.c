#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - dupicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *dupmem;
	int i, r = 0;
	
	if (str == NULL)
		return (NULL);
	i = 0;
	
	while (str[i] != '\0')
		i++;
	dupmem = malloc(sizeof(char) * (i + 1));
	if (dupmem == NULL)
		return (NULL);
	for (r = 0; str[r]; r++)
		dupmem[r] = str[r];
	return (dupmem);
}
