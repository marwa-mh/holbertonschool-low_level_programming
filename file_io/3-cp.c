#include <stdio.h>
#include "main.h"
/**
 * main - copies the content of one file to another.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: 0 on success.
 */
int main(int argc, char **argv)
{
	if (argc != 3)
		print_error(97, "Usage: cp file_from file_to\n", "");

	copy_file(argv[1], argv[2]);
	return (0);
}
