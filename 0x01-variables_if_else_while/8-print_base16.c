#include <stdio.h>
/**
 * main - Entry point
 * Description: Print hex numbers in lower case using putchar
 * Return: Always 0
 */
int main(void)
{
	int numb;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
	}
	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}
	putchat('\n');
	return (0);
}
