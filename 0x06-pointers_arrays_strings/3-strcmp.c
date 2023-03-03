#include "main.h"

/**
 * _strcmp - func that compare
 * @s1: inut
 * @s2: input
 * Return: difference
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++, s2++;
	}
	return (*s1 - *s2);
}
