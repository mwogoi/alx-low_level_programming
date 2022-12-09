#include <stdio.h>
/**
 * main - entry point
 * Description: Using putchar to print the alphabet in lowercase
 * Return: Alway 0
 */
int main(void)
{
	char alphabet = 'a';

	do {
		putchar(alphabet);
		alphabet++;
	} while (alphabet <= 'z');
	putchar('\n');
	return (0);
}
