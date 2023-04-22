#include <stdio.h>

/**
 * main - entry point of functin
 *
 * program that prints function
 *
 * Return: 0
 */
int main(void)
{
	char alphabet = 'a';
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');

	return (0);
}
