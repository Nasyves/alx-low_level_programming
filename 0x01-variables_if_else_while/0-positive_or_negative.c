#include<stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print number if negative positive or zero
 * description: get a random number and print number
 * Return: Always (success)
 *
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
	printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
	printf("%d is negative\n", n);
	}
	else
	{
	printf("%d is zero\n", n);
	}
	return (0);
}
