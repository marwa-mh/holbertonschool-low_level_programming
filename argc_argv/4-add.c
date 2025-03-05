#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - check the code
 *@argc: count of argument
 *@argv: array of arrgument
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int result = 0;
	int count = 1;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (count < argc)
	{
		if (!isdigit(*argv[count]))
		{
			printf("Error\n");
			return (1);
		}
		result += atoi(argv[count]);
		count++;
	}
	printf("%d\n", result);
	return (0);
}
