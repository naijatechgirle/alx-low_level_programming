#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/**
 * main - entry point for function.
 *
 * This program will assign a random number to the variable
 * each time it is executed
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("Last digit of %d ", n, n % 10);
	if (n % 10 > 5)
	{
		printf("is %d and is greater than 5\n");
	}
	else if (n % 10  == 0)
	{
		printf("is %d and is 0\n");
	}
	else
	{
		printf("is %d and is less than 6 and not 0\n");
	}
	return (0);
}
