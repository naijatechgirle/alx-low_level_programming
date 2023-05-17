#include "main.h"
#include <stdlib.h>
/**
 * str_concat - gets ends of input and add
 * @s1: input one
 * @s2: input two
 * Return: add s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *S3;
	int i, join;

	if (s1 == NULL)
		S1 = "";
	if (s2 == NULL)
		S2 = "";

	i = join = 0;

	while (s1[i] != '\0')
		i++;
	while (s2[join] != '\0')
		join++
	s3 = malloc(sizeof(char) * (i + ci + 1));

	if (s3 == NULL)
		return (NULL);

	i = join = 0;
	while (s1[i] != '\0')
	{
		s3 = s1[i];
		i++;
	}

	while (S2[ci] != '\0')
	{
		s3[i] = s2[ci];
		i++, join++;
	}
	s3 = '\0';
	return (s3);
}
