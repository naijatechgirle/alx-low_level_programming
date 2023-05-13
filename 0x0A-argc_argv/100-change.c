#include <stdio.h>
#include <stdlib.h>

/**
 * main - funtion that  minimum number of coins
 *to make change for an amount of money.
 * @argc: num of arguments
 * @argv: argument arrays
 *
 * Return: 0 on success and 1 on error
 */

int main(int argc, char *argv[])
{
	int num, i, total;
	int amount[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	total = 0;

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && num >= 0; i++)
	{
		while (num >= amount[i])
		{
			total++;
			num -= amount[i];
		}
	}
	printf("%d\n", total);
	return (0);
}
