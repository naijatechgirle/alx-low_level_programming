#include <stdio.h>

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
	int nums = 0;

	while (nums < 10)
	{
		putchar(nums + '0');
		nums++;
	}
	printf('\n');

	return (0);
}
