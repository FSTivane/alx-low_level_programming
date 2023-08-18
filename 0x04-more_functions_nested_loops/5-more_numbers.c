#include "main.h"

/**
 * more_numbers - prints 10 times number 0 -14
 *
 * Return: 0
 */

void more_numbers(void)
{
	int j;
	int i;

	for (j = 0; j <= 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar('0' + i / 10);
			}
				_putchar('0' + i % 10);
		}
			_putchar('\n');
	}
}
