#include <stdio.h>
/**
 * main - Entry point
 * Description: Out put the alphabet in lower and uppercase
 * Return: Always 0
 */
int main(void)
{
	char alphabet = 'a';

	do {
		putchar(alphabet);
		alphabet++;
	} while (alphabet <= 'z');
	alphabet = 'A';
	do {
		putchar(alphabet);
		alphabet++;
	} while (alphabet <= 'Z');
	putchar('\n');
	return (0);
}
