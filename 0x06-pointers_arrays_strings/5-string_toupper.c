#include "main.h"

/**
 * string_toupper - a function that change lower to upper
 * @s: input
 * Return: char pinter
 */

char *string_toupper(char *s)
{
	char *start = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
		s++;
	}
	return (start);
}
