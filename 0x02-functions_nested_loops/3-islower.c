#include "main.h"

/**
 * _islower - Entry point
 * @c : input
 * Description: Check if char is upper or lower
 * Return: 1 if lower case and 0 if upper
 */

int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			lower = 1;

	}

	return (lower);
}
