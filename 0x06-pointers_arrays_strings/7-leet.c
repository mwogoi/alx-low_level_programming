#include "main.h"
/**
 * leet - encoding
 * @string: The  string to be encoded
 * Return: The encoded string
 */
char *leet(char *string)
{
	int count1, count2;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (count1 = 0; string[count1] != '\0'; count1++)
	{
		for (count2 = 0; count2 < 10; count2++)
		{
			if (string[count1] == s1[count2])
				string[count1] = s2[count2];
		}
	}
	return (string);
}
