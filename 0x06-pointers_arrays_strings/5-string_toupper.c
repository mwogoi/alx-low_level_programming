#include  "main.h"
/**
 * string_toupper - change all lowercase to uppercase
 * @string: pointer to string location
 * Return: The string
 */
char *string_toupper(char *string)
{
	int count;

	for (count = 0; string[count] != '\0' ; count++)
	{
		if (string[count] >= 'a' && string[count] <= 'z')
			string[count] = string[count] - 32;
	}
	return (string);
}

