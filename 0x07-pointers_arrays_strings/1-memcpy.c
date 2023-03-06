#include "main.h"

/**
 * _memcpy - func tha copy memory rea
 * @dest: input
 * @src: input
 * @n: input
 * Return: pointer
 */

char *_memcpy(char *dest, char*src, unsigned int n)
{
	char *start = dest;

	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (start);
}
