#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: Is the argument
 * Return: 0
*/

int print_last_digit(int n)
{

	if (n < 0)
	
		n = n * -1;

	_putchar((n % 10) + '0');
	
	return (n % 10);

}

