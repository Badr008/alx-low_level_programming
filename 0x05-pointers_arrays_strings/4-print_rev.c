#include "main.h"

/**
 * print_rev - a function that print a string in rev
 * @s: input
 * Return: nothing
 */

void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	while (len)
		_putchar(s[--len]);

	_putchar('\n');
}