#include "main.h"

/**
 * _memset - func that fill memory const with bytes
 * @s: input
 * @b: input
 * @n: input
 * Return: return pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *start = s;

	while (n--)
	{
		*s = b;
		s++;
	}
	return (start);
}
