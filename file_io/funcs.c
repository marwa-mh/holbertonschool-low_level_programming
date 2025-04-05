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
/**
 * print_error_int - Prints an error message and exits with a code
 * @code: Exit code
 * @message: Error message format string
 * @arg: Argument for the format int
 * Return: Nothing
 */
void print_error_int(int code, const char *message, int arg)
{
	dprintf(STDERR_FILENO, message, arg);
	exit(code);
}
/**
 * print_error_simple - Prints a simple error message with no format args
 * @code: Exit code
 * @message: Error message
 */
void print_error_simple(int code, const char *message)
{
	dprintf(STDERR_FILENO, "%s", message);
	exit(code);
}
