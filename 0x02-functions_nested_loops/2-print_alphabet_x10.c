#include "main.h"

/**
 *  Description: prints ten times the alphabe
 *  in lowercase, followed by a new line.
 */

void print_alphabet_x10(void)
{
	char alphabets;
	int i;

	for (i = 0; i < 10; i++)
	{
		alphabets = 'a';

		while(alphabets <= 'z')
		{
			_putchar(alphabets);
			alphabets++;
		}
		_putchar('\n');
	}
}
