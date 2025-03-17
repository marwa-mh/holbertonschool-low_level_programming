#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - add two values
 * @a: int
 * @b: int
 * Return: int
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - sub two values
 * @a: int
 * @b: int
 * Return: int
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiply two values
 * @a: int
 * @b: int
 * Return: int
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divid two values
 * @a: int
 * @b: int
 * Return: int
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - mod two values
 * @a: int
 * @b: int
 * Return: int
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
