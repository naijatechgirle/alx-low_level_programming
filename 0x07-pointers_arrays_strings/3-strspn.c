#include "main.h"
/**
 * _strspn- Entry point
 * description: function that gets the length of a prefix substring.
 *
 * @S: input
 * @accept: input
 *
 * Return: 0
 */

unsigned int _strspn(char *S, char *accept)
{
	unsigned int n = 0;
	int i;

	while (*S)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*S == accept[i])
			{
				n++;
				break;
			}
			else if (accept[i + 1] == '\0')
			{
				return (n);
			}
		}
		S++;
	}
	return (n);
}
