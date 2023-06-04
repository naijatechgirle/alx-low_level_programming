#include "main.h"
/**
 * swap_int - fxn to swap two integers
 * @a: first input
 * @b: second input
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int p = *a;
	*a = *b;
	*b = p;
}
