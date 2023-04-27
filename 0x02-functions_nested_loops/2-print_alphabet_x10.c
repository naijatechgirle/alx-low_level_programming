#include "main.h"

/**
 * print_alphabet_x10 - prints all alphabets in lowercase 10 times.
 * Return: On success 1.
 */

void print_alphabet_x10(void)
{
	char alphabets;
	int i;

	for (i = 0; i < 10; i++)
	{
		alphabets = 'a';

		while (alphabets <= 'z')
		{
			_putchar(alphabets);
			alphabets++;
		}
		_putchar('\n');
	}
}
