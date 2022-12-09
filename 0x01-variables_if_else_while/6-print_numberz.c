#include <stdio.h>
/**
 * main - entry point
 * Description: output numbers below 10 using putchar
 * Return:Always 0
 */
int main(void)
{
	int numb;

	for (numb = 0; numb < 10 ; numb++)
	{
		putchar(numb + '0');
	}
	putchar('\n');
	return (0);
}
