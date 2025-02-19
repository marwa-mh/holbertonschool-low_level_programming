#include "main.h"

/**
 * print_last_digit - print the last digit of the number
 *@n: input number
 * Return: int
 *
 */
int print_last_digit(int n)
{
	int lastDigit = n % 10;

	_putchar(lastDigit);
	return (lastDigit);
}
