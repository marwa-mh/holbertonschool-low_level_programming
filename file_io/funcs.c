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
	fprintf(stdout, message, arg);
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
	fprintf(stdout, message, arg);
	exit(code);
}
/**
 * print_error_simple - Prints a simple error message with no format args
 * @code: Exit code
 * @message: Error message
 */
void print_error_simple(int code, const char *message)
{
	fprintf(stdout, "%s", message);
	exit(code);
}
