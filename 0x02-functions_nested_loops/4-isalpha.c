#include "main.h"

/**
 * _isalpha - Check main
 * @c: input
 * Description: return 1 if letter
 * lower or upper
 * Return: 1 or 0
 */

int _isalpha(int c)
{
	char lower, upper;
	int isletter = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (c == lower || c == upper)
				isletter = 1;
		}
	}

	return (isletter);
}
