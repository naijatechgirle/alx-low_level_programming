#include "main.h"
/**
 * _puts_recursion - fxn like puts()
 * @s: input
 * Return: Always 0
 */
void _puts_recursion(char *S)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('/n');
	}
}
