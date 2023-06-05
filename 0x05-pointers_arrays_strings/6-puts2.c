#include "main.h"
/**
 * puts2 - Prints every other character of a string, starting with the first
 * @str: input
 * Description: This function prints every other character of the input string,
 * starting with the first character. It iterates through the string and prints
 * the characters at even indices until it reaches the terminating null byte.
 * Return: print
 */
void puts2(char *str)
{
	int len = 0;
	int t = 0;
	char *y = str;
	int i;

	while (*y != '\0')
	{
		y++;
		len++;
	}
	t = len - 1;

	for (i = 0; i <= t; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
