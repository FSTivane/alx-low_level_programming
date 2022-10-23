#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints number from 0 to 98
 * @n: argument starting from
 *
*/

void print_to_98(int n)
{
	for (n = 7; n < 99; n++)
	{
		_putchar(n);

		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
	}

	_putchar('\n');
}
