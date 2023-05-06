#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: maximum number of bytes to use from `src`
 *
 * Description: This function appends the `n`
 * bytes of the `src` string to the
 * end of the `dest` string, overwriting
 * the null byte ('\0') at the  *end of
 * `dest`, and then adds a terminating null byte.
 * If `src` contains   *fewer than
 * `n` bytes, the remaining bytes in `dest` are
 * filled with null byte *s.
 *
 * Return: pointer to destination string `dest`
 */
char *_strncat(char *dest, char *src, int n)
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
