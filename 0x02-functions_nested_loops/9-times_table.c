#include "main.h"

/**
 * times_table - Prints the 9 times table
 *
 * Return: no return
 */

void times_table(void)
{
	int a, b, mulTable;

	for (a = 0; a <= 9; a++)
	{
		_putchar(48);

		for (b = 1; b <= 9; b++)
		{
			mulTable = a * b;
			_putchar(44);
			_putchar(32);

			if (mulTable <= 9)
			{
				_putchar(32);
				_putchar(mulTable + 48);
			}
			else
			{
				_putchar((mulTable / 10) + 48);
				_putchar((mulTable % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
