#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: 0 on success
 */
void print_diagsums(int *a, int size)
{
	int num1, num2, i;

	num1 = 0;
	num2 = 0;

	for (i = 0; i < size; i++)
	{
		num1 = num1 + a[i * size + i];
	}
	for (i = size - 1; i >= 0; i--)
	{
		num2 += a[i * size + (size - i - 1)];
	}
	printf("%d, %d\n", num1, num2);
}
