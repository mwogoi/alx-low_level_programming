#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: String 1
 * @src: String 2
 * @n: number of bytes
 * Return: final string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int count1, count2;

	count1 = 0;
	count2 = 0;
	while (dest[count1] != '\0')
		count1++;
	while (src[count2] != '\0' && count2 < n)
	{
		dest[count1] = src[count2];
		count1++;
		count2++;
	}
	dest[count1] = '\0';
	return (dest);
}
