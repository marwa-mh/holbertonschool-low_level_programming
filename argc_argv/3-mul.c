#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code
 *@argc: count of argument
 *@argv: array of arrgument
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int result = 0;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	result = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", result);
	return (0);
}
