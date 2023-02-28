#include "main.h"
#include <stdio.h>

/**
 * print_array - func print ar of string
 * @a: first input
 * @n: second input
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n")
}
