#include "main.h"

/**
 * print_array - prints n elements of an array of ints
 *
 * @a: array parameter
 * @n: number os elements
 *
 * Return: n elements
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
