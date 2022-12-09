#include <stdio.h>
/**
 * main - Entry point
 * Description: Print hex numbers in lower case using putchar
 * Return: Always 0
 */
int main(void)
{
	int numb;

	for (numb = 0; numb < 10; numb++)
	{
		putchar(numb + '0');
	}
	for (numb = 'a'; numb <= 'f'; numb++)
	{
		putchar(numb);
	}
	putchat('\n');
	return (0);
}
