#include <stdio.h>
/**
 * main - Print first 50 fibonachi numbers starting with 1 & 2
 * Return: Always 0
 */
int main(void)
{
	int counter;
	unsigned long numb1, numb2, sum;

	numb1 = 0;
	numb2 = 1;
	for (counter = 0; counter < 50; counter++)
	{
		sum = numb1 + numb2;
		printf("%lu", sum);
		numb1 = numb2;
		numb2 = sum;
		if (sum < 49)
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}
