#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates random password
 * Return: always 0
 */
int main(void)
{
	int i, j;
	char c;

	srand(time(0));

	j = rand() % 100;
	for (i = 0; i < j; i++)
	{
		if ((rand() % 100) > 50)
			c = 'a' + (rand() % 26);
		else
			c = 'A' + (rand() % 26);
		printf("%c", c);
	}
	return (0);
}
