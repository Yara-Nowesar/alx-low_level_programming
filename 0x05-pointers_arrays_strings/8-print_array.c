#include "main.h"

/**
 * print_array - prints a elements of an array of integers
 *
 * @a: string parameter input
 * @n: elements parameter input
 *
 * Return: nothing
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
