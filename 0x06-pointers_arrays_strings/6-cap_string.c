#include "main.h"
/**
 * cap_string - Capitalize all the words of a string
 * @string: the pointer to a string
 * Return: The capitalized string
 */
char *cap_string(char *string)
{
	int count;

	while (string[count])
	{
		for (count = 0; !(string[count] >= 'a' && string[count] <= 'z'); count++)
		{
			if (string[count - 1] == ' ' ||
			    string[count - 1] == '\t' ||
			    string[count - 1] == '\n' ||
			    string[count - 1] == ',' ||
			    string[count - 1] == ';' ||
			    string[count - 1] == '.' ||
			    string[count - 1] == '!' ||
			    string[count - 1] == '?' ||
			    string[count - 1] == '"' ||
			    string[count - 1] == '(' ||
			    string[count - 1] == ')' ||
			    string[count - 1] == '{' ||
			    string[count - 1] == '}' ||
			    count == 0)
				string[count] -= 32;
		}
	}
	return (string)
}
