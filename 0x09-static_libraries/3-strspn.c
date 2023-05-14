#include "main.h"
/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 *
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int y = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				y++;
				break;
			}
			else if (accept[r + 1] == '\0')
			{
				return (y);
			}
		}
		s++;
	}
	return (y);
}
