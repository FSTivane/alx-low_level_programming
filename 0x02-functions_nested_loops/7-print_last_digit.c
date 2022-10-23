#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @c: Is the argument
 * Return: 0
*/

int print_last_digit(int c)
{
	if (c => 0)
	{
		_putchar (c % 10 + '0');

		return (c % 10);
	}
	else

	{
		_putchar (-c % 10 + '0');

		return (-c % 10);

	}

}
