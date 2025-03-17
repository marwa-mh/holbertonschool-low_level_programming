#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - check the code
 *@argc: count of argument
 *@argv: array of arrgument
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int a;
	int b;
	char *op;
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = argv[2];
	result = (get_op_func(op))(a, b);
	printf("%d\n", result);
	return (0);
}
