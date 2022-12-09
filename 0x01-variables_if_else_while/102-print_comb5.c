#include <stdio.h>
/**
 * main - entry point
 * Description: Print all possible combinations of two two-digit numbers
 * Return: Always 0
 */
int main(void)
{
	int Numb1, Numb2;

	for (Numb1 = 0; Numb1 <= 98; Numb1++)
	{
		for (Numb2 = Numb1 + 1; Numb2 <= 99; Numb2++)
		{
			putchar((Numb1 / 10) + '0');
			putchar((Numb1 % 10) + '0');
			putchar(' ');
			putchar((Numb2 / 10) + '0');
			putchar((Numb2 % 10) + '0');

			if (Numb1 == 98 && Numb2 == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
