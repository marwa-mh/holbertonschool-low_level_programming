#include "main.h"
/**
 * point_to_last - point to last character of string
 * @s: char
 * Return: char
 */
char *point_to_last(char *s)
{
	if (*s != '\0')
		return (point_to_last(s + 1));
	else
		return (s - 1);
}
/**
 * is_palindrome2 - helper
 * @s: char
 * @e: end of char
 * Return: int
 */
int is_palindrome2(char *s, char *e)
{
	if (*s == '\0')
		return (1);
	if (*s != *e)
		return (0);
	return (is_palindrome2(++s, --e));
}
/**
 * is_palindrome - check
 * @s: char
 * Return: int
 */
int is_palindrome(char *s)
{
	char *ps = s;
	char *pe;

	pe = point_to_last(s);
	return (is_palindrome2(ps, pe));
}
