#include "main.h"
/**
 * _strcpy - copy string pointers
 * @dest: Destination of string to be copied to
 * @src: Source of the string
 * Return: Destinaton site
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (i >= 0)
	{
		*(dest + i) = *(src + count);
		if (*(src + i) == 0)
			break;
		i++;
	}
	return (dest);
}
