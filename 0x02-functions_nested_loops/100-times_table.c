include "main.h"

/**
 * print_times_table - Prints the n times table
 *
 * @n: number times table (0 < n <= 15)
 *
 * Return: no return
 */

void print_times_table(int n)
{
	int a, b, mulTable;

	if (n >= 0 && n <= 15)
	{
		_putchar(48);
		for (b = 1; b <= n; b++)
		{
			mulTable = a * b;
			_putchar(44);
			_putchar(32);
			if (mulTable <= 9)
			{
				_putchar(32);
				_putchar((mulTable / 10) + 48);
				_putchar((mulTable % 10) + 48);
			}
			else
			{
				_putchar(((mulTable / 100) % 10) + 48);
				_putchar(((mulTable / 10) % 10) + 48);
				_putchar((mulTable % 10) + 48);
			}
		}
		_putchar('\n');
	{
}
