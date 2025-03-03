#include "main.h"
#include <stddef.h>
/**
 *_strstr - locate a substring
 * @haystack: string
 * @needle: substring
 * Return: char
 */
char *_strstr(char *haystack, char *needle)
{
	char *p_needle = needle;
	char *target;
	int target_found = 0;

	if (*needle == '\0')
		return (haystack);
	while (*haystack != '\0' && *p_needle != '\0')
	{
		if (*p_needle == *haystack)
		{
			if (target_found == 0)
			{
				target = haystack;
				target_found = 1;
			}
			p_needle++;
		}
		else if (p_needle != needle)
		{
			p_needle = needle;
			target_found = 0;
		}
		haystack++;
	}
	if (target_found == 0)
		return (NULL);
return (target);
}
