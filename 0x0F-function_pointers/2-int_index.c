#include "function_pointers.h"

/**
 * int_index - that searches for an integer
 * @array: array of objs
 * @size: number of elements
 * @cmp: pointer
 * Return: 0
 */


int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}

