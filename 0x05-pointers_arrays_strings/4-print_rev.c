#include "main.h"
/**
 * print_rev - fxn that prints a string in reverse
 * @s: input to be reversed
 * Return: 0
 */
void print_rev(char *s)
{
	int len = 0;
	int i;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;

	for (i = len; i > 0; i++)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
