#include "main.h"

/**
 * _strlen - a function that return len
 * @s: input
 * Return: nothing
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
