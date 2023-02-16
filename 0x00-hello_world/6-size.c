#include <stdio.h>

/**
 *  main - Entry Point
 *
 *  Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %i byte(s)", (int)sizeof(char));
	printf("Size of an int: %i byte(s)", (int)sizeof(int));
	printf("Size of a long int: %i byte(s)", (int)sizeof(long int));
	printf("Size of a long long int: %i byte(s)", (int)sizeof(long long int));
	printf("Size of a float: %i byte(s)",(int)sizeof(float));
	return (0);
}
