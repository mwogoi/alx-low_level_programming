#include <stdio.h>
/**
 * main - Entry point
 * Description: Print the alphabet excluding 'e' and 'q'
 * Return: Always 0
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
		if (alphabet == 'e' || alphabet == 'q')
			alphabet++;
	}
	putchar('\n');
	return (0);
}
