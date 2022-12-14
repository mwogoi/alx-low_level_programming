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
		if ((k < 4000000) && (k % 2 == 0))
			sum = sum + k;
	}
	printf("%lu\n", sum);
	return (0);
}
