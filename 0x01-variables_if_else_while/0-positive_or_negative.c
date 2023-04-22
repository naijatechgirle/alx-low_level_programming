#include <stdlib.h>
#include <time.h>
/* header: for io */
#include <stdio.h>

/**
  * main - Entry point for the program.
  *
  * function main - This is a program that generates a random integer
  * and prints whether it is positive, negative or zero.
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("%d is", n);
	if (n > 0)
	{
		printf("positive\n");
	}
	else if (n == 0)
	{
		printf("zero\n");
	}
	else
	{
		printf("negative\n");
	}
	return (0);
}
