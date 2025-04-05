#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"
/**
 * print_error - Prints an error message and exits with a code
 * @code: Exit code
 * @message: Error message format string
 * @arg: Argument for the format string
 * Return: Nothing
 */
void print_error(int code, const char *message, const char *arg)
{
	dprintf(STDERR_FILENO, message, arg);
	exit(code);
}
