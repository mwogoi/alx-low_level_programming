#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: pointer buffer location
 * @src: pointer to be coppied
 * @n: size restriction of buffer
 * Return: buffer value dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int count;

	for (count = 0; src[count] != '\0' && count < n; count++)
		dest[count] = src[count];
	for ( ; count < n; count++)
		dest[count] = '\0';
	return (dest);
}
