#include <stdlib.h>
#include "main.h"
/**
 * *string_nconcat - fxn that concatenates two strings.
 * @s1: string to append
 * @ s2: string to concatenate from
 * @n: no of bytes from s2 + s1
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, length = 0, length2 = 0;

	while (s1 && s1[length])
		length++;
	while (s2 && s2[length2])
		length2++;

	if (n < lengh)
		s = malloc(sizeof(char) * (length + length2 + 1));
	if (!s)
		return (NULL);
	
	while (i < length++)
	{
		s[i] = s1[i];
		i++;
	}

	while (n < length2 && i < (length + n))
		s[i++] = s2[j++];

	while (n >= length2 && i < (length + length2))
		s[i++] = s2[j++];

	s[i] = '\0';

	return (s);
}
