#include <stdio.h>
/**
 * main - Print fibonacci numbers up 98
 * Return: Always 0
 */
int main(void)
{
	int counter;
	unsigned long numb1, numb2, sum;

	numb1 = 0;
	numb2 = 1;

	for (counter = 0; counter < 98; counter++)
	{
		sum = numb1 + numb2;
		printf("%lu", sum);
		numb1 = numb2;
		numb2 = sum;
		if (counter < 97)
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}
