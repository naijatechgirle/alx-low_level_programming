#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - returns the sum of two numbers
 * @a: the first input
 * @b: second input
 * Return: sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the diff of two num
 * @a: first input
 * @b: second input
 * Return: diff
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - returns the product
 * @a: input
 * @b: input
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - returns the division
 * @a: input
 * @b: input
 * Return: division
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - returns modulus
 * @a: input
 * @b: input
 * Return: modulus
 */
int op_mod(int a, int b)
{
	return (a % b);
}
