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
	int number = 0;
	int result = 0;
	int i = 0;
	int change[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	number = atoi(argv[1]);
	while (number > 0)
	{
		for (i = 0; i < 5; i++)
			if (number - change[i] >= 0)
			{
				number -= change[i];
				result++;
				break;
			}
	}
	printf("%d\n", result);
	return (0);
}
