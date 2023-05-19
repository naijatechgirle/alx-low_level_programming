#include <stdlib.h>
#include "main.h"
/**
 * *malloc_checked - fxn that allocates memory using malloc
 * @b: no of bytes to allocate
 * Return: pointer to allocate memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
