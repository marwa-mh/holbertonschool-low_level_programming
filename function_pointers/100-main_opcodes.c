#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints its own opcodes
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 on success, 1 or 2 on error
 */
int main(int argc, char *argv[])
{
	int num_bytes = atoi(argv[argc - 1]);
	int i = 0;
	unsigned char *ptr = (unsigned char *)main;

	if (num_bytes < 1)
	{
		printf("Error\n");
		exit(1);
	}
	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x", ptr[i]);
		if (i < num_bytes - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
