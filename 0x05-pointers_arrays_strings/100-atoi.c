#include "main.h"
/**
 * _isdigit - Checks if a character is in a digit
 * @c: Character to be checked
 * Return: 1 if it is a digit else 0
 */
int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	return (0);
}

/**
 * _atoi - Converts a string to an integer
 * @s: String to be converted
 * Return: Integer converted
 */
int _atoi(char *s)
{
	int returnn, sign, start;
	start = 0;
	for (returnn = 0, sign = 1; (*s != '\0'); s++)
	{
		if (_isdigit(*s))
		{
			start = 1;
			returnn *= 10;
			if (sign == 1)
				returnn += ((*s) - '0');
			else
				returnn -= ((*s) - '0');
		}
		else if (start)
		{
			break;
		}
		else if (*s == '-')
		{
			sign *= -1;
		}
	}
	return (returnn);
}
