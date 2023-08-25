#include "main.h"

/**
 * reverse_array - reveses the conten in an array
 * @a: parameter
 * @b: parameter
 */

void reverse_array(int *a, int n)
{
	int i;
	int aux;

	for (i = 0; i < n--; i++)
	{
		aux = a[i];
		a[i] = a[n];
		a[n] = aux;
	}
}
