#include "main.h"

/**
 * main - entry poin
 * print_alphabet - print_alphabet
 * this function prints all alphabet in lowercase
 */

/**
 * print_alphabet - function prints all alphabet in lowercase
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
