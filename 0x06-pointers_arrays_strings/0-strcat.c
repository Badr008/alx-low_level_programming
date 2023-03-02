#include "main.h"

/**
 * _strcat - a func that concate two string
 * @dest: first input
 * @src : second one
 * Return: pointer to result
 */

char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';

	return (temp);
}
