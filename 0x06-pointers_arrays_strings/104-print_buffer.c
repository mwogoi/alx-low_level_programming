#include "main.h"
#include <stdio.h>
/**
 * print_buffer - print the buffer storage
 * @b: the buffer pointer
 * @size: The size of the buffer
 * Return: Void
 */
void print_buffer(char *b, int size)
{
	int numb, count1, count2;

	numb = 0;
	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (numb < size)
	{
		count2 = size - numb < 10 ? size - numb : 10;
		printf("%08x:", numb);
		for (count1; count1 < 10; count1++)
		{
			if (count1 < count2)
				printf("%02x", *(b + numb + count1));
			else
				printf(" ");
			if (count1 % 2)
				printf(" ");
		}
		for (count1 = 0; count1 < count2; count1++)
		{
			int c = *(b + numb + count1);

			if (c < 32 || c > 132)
				c = '.';
			printf("%c", c);
		}
		printf("\n");
		numb += 10;
	}
}
