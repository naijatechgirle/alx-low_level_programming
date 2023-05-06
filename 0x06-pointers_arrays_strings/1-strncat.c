#include "main.h"

/*
 * _strncat - function adds two  strings
 * @dest: final target
 * @src: starting point
 * @n: number of bytes read from src
 * Return: points to dest
 */

char *_strncat(char *dest, char *src, int n);
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;

	while (j < n && src[i] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
