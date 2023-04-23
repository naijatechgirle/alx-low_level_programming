#include <stdio.h>

/**
 * main - entry point
 *
 * program that prints all possible combinations
 * of single-digit numbers.
 *
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 0; i < 9; i++)
	{
		putchar(i + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('9');

	return (0);
}
