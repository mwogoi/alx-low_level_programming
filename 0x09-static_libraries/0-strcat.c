#include "main.h"
/**
 * _strcat - Merge two strings
 * @dest: string to merge into
 * @src: string to be merged
 * Return: dest the final merged string
 */
char *_strcat(char *dest, char *src)
{
	int count1, count2;

	count1 = 0;
	count2 = 0;
	while (dest[count1] != '\0')
		count1++;
	while (src[count2] != '\0')
	{
		dest[count1] = src[count2];
		count1++;
		count2++;
	}
	dest[count1] = '\0';
	return (dest);
}
