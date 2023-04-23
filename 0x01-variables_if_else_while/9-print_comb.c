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

	for (i = 0; i < 10; i++)
	{
		for (j = i; j < 10; j++)
		{
			putchar((i * 10 + j) / 10 + '0');
			putchar((i * 10 + j) % 10 + '0');
			putchar(',');
			putchar(' ');
		}
	}

	return (0);
}
