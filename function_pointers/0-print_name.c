#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name of the person
 * @f: function pointer
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	void (*fp_print_name)(char *name);

	fp_print_name = f;
	fp_print_name(name);
}
