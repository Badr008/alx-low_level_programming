#include "main.h"

/**
 * swap_int - function that swap value of two int
 * @a: first input
 * @b: second input
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
