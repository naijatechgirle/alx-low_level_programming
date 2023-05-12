#include <stdio.h>
#include "main.h"

/**
 * main - funtion that prints the number of arguments passed into it
 * @argc: num of arguments
 * @argv: argument arrays
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	(void)argv;
	{
		printf("%d\n", argc - 1);

		return (0);
	}
}
