#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Prints the lowercasae alphabet in lowercase
 */

void print_alphabet(void)
{
	char words;

	for (words = 'a'; words <= 'z'; words++)
	{
		_putchar(words);

	}
	_putchar('\n');
}
