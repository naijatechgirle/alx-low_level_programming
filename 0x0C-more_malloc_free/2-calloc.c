#include <stdlib.h>
#include "main.h"
/**
 * *_memset - fxn that allocates memory for an array, using malloc
 * @s: memory area to be filled
 * @b: char to copy
 * @n: no of lines to copy b
 * Return: pointer to the memory area s
 */
char *_memset(char *S, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
/**
 **_calloc - allocates memory for an array
 * @nmemb: no of elements in the array
 * @size: size of each element
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmenb, usigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size *nmemb);

	if(ptr == NULL)
		return (NULL);
	_memset(ptr, 0, nmemb *size);

	return (ptr);
}
