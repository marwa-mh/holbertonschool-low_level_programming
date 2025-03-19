#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdint.h>
#include "variadic_functions.h"
/**
 * print_char - print character
 * @args: character
 * Return: void
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}
/**
 * print_string - print string
 * @args: character
 * Return: void
 */
void print_string(va_list args)
{
	char *str = va_arg(args, char*);

	printf("%s", str + !str * (intptr_t) "(nil)" - !str * (intptr_t)str);
}
/**
 * print_int - print character
 * @args: character
 * Return: void
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}
/**
 * print_float - print character
 * @args: character
 * Return: void
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}
/**
 * print_all - print all
 * @format: format
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char type;
	char *sep = "";
	format_type_t ft[] = {
	{'c', print_char},
	{'i', print_int},
	{'f', print_float},
	{'s', print_string}
	};

	va_start(args, format);
	while (format != NULL && format[i] != '\0')
	{
		type = format[i];
		while (j < 4)
		{
			if (ft[j].abbreviation == type)
			{
				printf("%s", sep);
				ft[j].name(args);
				sep = ", ";
				break;
			}
			j++;
		}
		i++;
	j = 0;
	}
	printf("\n");
	va_end(args);
}
