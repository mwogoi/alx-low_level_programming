#include <stdio.h>
#include <unistd.h>
/**
 * main- Prints to std erro
 * Return: 1 if succesful.
 */
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora korpar, 2015-10-19\n", 58);
	return (1);
}
