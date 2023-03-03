#include "main.h"

/**
 * _strncpy - func copy a str
 * @dest: input
 * @src: input
 * @n: input
 * Return: Pointer to result
 */

char *_strncpy(char *dest, char* src, int n)
{
	int srclen = 0, i = 0;

	char *temp = dest, *start = src;

	while (*src)
	{
		src++;
		srclen++;
	}

	srclen++;

	if (n > srclen)
		n = srclen;


	src = start;

	for (; i < n; i++)
		*dest++ = *src++;

	return (temp);
}
