#ifndef _v_f_h
#define _v_f_h
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 * struct format_type - Struct format_type
 *
 * @abbreviation: The abbreviation
 * @name: The function associated
 */
typedef struct format_type
{
	char abbreviation;
	void (*name)(va_list args);
} format_type_t;
#endif
