#include "main.h"
#include <stdio.h>

/**
 * _strchr - a function
 * @s: input
 * @c: input
 * Return: return a pointer
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
			return (s);
		s++;
	}
	if (c == *s)
		return (s);
	return (NULL);
}
