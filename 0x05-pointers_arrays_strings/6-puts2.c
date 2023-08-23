#include "main.h"

/**
 * puts2 - prints every other chars
 * @str: string parameter
 *
 * Return: string
 */

void puts2(char *str)
{
	int length = 0;
	int n = 0;
	int i;
	char *c = str;

	while (*c != '\0')
	{
		c++;
		length++;
	}

	n = length - 1;

	for (i = 0; i <= n; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
