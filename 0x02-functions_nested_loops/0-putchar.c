#include <unistd.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	char word[9] = "Holberton";
	int i;

	for (i = 0; i < 9; i++)
		_putchar(word[i]);
	_putchar('\n');

	return (0);
}
