#include "main.h"


/**
 *_abs-prints the absolute value of an integer.
 *@a:the integer to compute its absolute value.
 *Return:returns the abs value.
 *
 */

int _abs (int a)
{
	int h = a;
	int absVal;

	if (h < 0)
	{
		h = h * (-1);
	}
	absVal = h;
	return (absVal);
}
