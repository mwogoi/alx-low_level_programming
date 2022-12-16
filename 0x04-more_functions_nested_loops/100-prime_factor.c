#include <stdio.h>
/**
 * main - largest prime factor
 * Return: 0
 */
int main(void)
{
	long int numb, prime;

	numb = 612852475143;
	for (prime = 2; prime <= numb; prime++)
	{
		if (numb % prime == 0)
		{
			numb /= prime;
			prime--;
		}
	}
	printf("%ld\n", prime);
	return (0);
}
