#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @dest: where memory is kept
 * @src: memory is copied here
 * @n: digit of bytes
 *
 * Return: the copied memory byte
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int p = 0;
	int i = n;

	for (; p < i; p++)
	{
		dest[p] = src[p];
		n++;
	}
	return (dest);
}
