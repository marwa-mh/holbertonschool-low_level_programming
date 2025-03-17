#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"
/**
 * get_op_func - get op func
 * @s: operator
 * @x: first number
 * @y: second number
 * @Return: int
 */
int (*get_op_func(char *s))(int x, int y)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 5)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}
	printf("Error\n");
	exit(100);
	return (NULL);
}
