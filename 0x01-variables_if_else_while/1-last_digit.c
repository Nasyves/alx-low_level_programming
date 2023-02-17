#include<stdio.h>
#include<time.h>
#include<stdlib.h>

/**
 * main - Prints a text according number
 * Return: Always(SUCCESS)
 *
 */

int main(void)
{
	int n, lastd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastd = n % 10;

	if (lastd > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, lastd);
	}
	else if (lastd == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, lastd);
	}
	else if (lastd < 6 && lastd != 0)
	{
		printf("Last digit of %i is %i and is less than 6 and is not 0\n", n, lastd);
	}
	return (0);
}
