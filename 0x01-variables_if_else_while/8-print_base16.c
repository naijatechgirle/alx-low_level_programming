#include <stdio.h>

/**
 * main - entry point
 *
 * program that prints all the numbers of base 16
 * in lowercase, followed by a new line.
 *
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}

	for (i = 'a'; i <= 'f'; c++)
	{
		putchar(i);
	}
	putchar("\n");

	return (0);
}
