#include "main.h"

/**
 * swap_int - swaps the values of two integers
 *
 * @a: input value
 * @b: input value
 *
 * Return: a, b
 */

void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
