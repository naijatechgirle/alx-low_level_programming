#include "main.h"
/**
 * _strstr - Entry point
 * description: function that locates a substring.
 * @haystack: input
 * @needle: input
 * Return: 0 on success
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *p = needle;

		while (*i == *p && *p != '\0')
		{
			i++;
			p++;
		}
		if (*p == '\0')
		{
			return (haystack);
		}
	}
	return (0);
}
