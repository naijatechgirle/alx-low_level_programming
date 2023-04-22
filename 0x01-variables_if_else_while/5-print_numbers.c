#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 *  program that prints all single digit numbers
 *  of base 10 starting from 0
 *
 *  Return: 0;
 */
int main(void)
{
	int i;
	int nums = 1;

	for (i = 0; i < 10; i++)
	{
		printf(nums);
		nums++;
	}
	printf('\n');

	return (0);
}
