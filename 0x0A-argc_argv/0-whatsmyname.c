#include <stdio.h>
#include "main.h"

/**
 * main - functio that prints its name
 * @argc: the num of arguments
 * @argv: arguments array
 *
 * Return: 0 on success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
