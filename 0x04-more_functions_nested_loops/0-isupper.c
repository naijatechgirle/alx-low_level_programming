#include <stdio.h>
#include "main.h"

/**
 * main - entry point of function
 *
 * description: _isupper checks for uppercasae character
 *
 * Return 1 if true, else 0
 */

int _isipper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
