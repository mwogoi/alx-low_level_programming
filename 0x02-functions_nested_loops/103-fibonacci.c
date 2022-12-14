#include <stdio.h>
/**
 * main - Print a fibonacci sequence suming previous 3 numbers
 * Return: always 0
 */
int main(void)
{
	unsigned long numb1, numb2, numb3, sum;
	int counter;

	numb1 = 0;
	numb2 = 1;
	sum = 0;
	for (counter = 0; counter < 80; counter++)
	{
		numb3 = numb1 + numb2;
		numb1 = numb2;
		numb2 = numb3;
		if ((numb3 < 4000000) && (numb3 % 2 == 0))
			sum = sum + numb3;
	}
	printf("%lu\n", sum);
	return (0);
}
