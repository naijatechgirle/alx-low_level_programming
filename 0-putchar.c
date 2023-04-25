#include <stdio.h>
#include <unistd.h>

/**
 * main - entry of function
 *
 *  program that prints _putchar,
 *  followed by a new line.
 *
 *  Return: 0
 */

int main(void)
{
	char* words = "_putchar\n";
	char* b = words;

	while (*b)
	{
		putchar(*b);
		b++;
	}

	return (0);
}
