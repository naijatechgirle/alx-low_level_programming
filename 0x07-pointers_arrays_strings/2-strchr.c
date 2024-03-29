#include "main.h"
/**
 * _strchr - entry point
 *
 * description: function that locates a character in a string
 *
 * @s: input
 * @c: input
 * Return: 0 on success
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
