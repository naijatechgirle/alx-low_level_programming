#include "main.h"
/**
 * _memset - memory initialization
 * @s: starting point
 * @b: value
 * @n: number od bytes to be modified
 *
 * Return: modified array
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (;n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
