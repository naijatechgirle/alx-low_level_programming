#include <stdio.h>
/**
 * main - entry point
 *
 * a program that prints the alphabet in lowercase
 * followed by a new line.
 *
 * Return: 0;
 */

int main(void)
{
	char letter = 'a'
	int i;

	for (i = 0; i < 26; i++)
	{
		if (letter != 'q' && letter != 'e')
		{
			putchar(letter);
			letter++;
		}
	}
	putchar('\n');

	return 0;
}
