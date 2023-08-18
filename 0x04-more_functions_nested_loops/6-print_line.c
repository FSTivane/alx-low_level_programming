#include "main.h"

/**
 * print_line - drows a straight line in the terminal
 *@n is lenght of the line
 *Return: 0
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
			_putchar('\n');
	}
}
