#include "main.h"

/**
 * print_to_98 - prints number from 0 to 98
 * @n: argument starting from
 *
*/

void print_to_98(int n)
{

	if (n < 98)
	{
		for (n = n; n < 99; n++)
		{
			_putchar(n);

			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}

	}
	else
	{
		for (n = n; n > 97;  n--)
		{
			_putchar(n);

			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}

	_putchar('\n');
}
