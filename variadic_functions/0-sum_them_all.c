#include<stdio.h>
#include<stdarg.h>
/**
 * sum_them_all - sm them all
 * @n: numbers
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	int i;

	va_start(args, n);

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);

}
