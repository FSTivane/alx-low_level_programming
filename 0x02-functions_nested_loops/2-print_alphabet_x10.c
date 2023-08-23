#include "main.h"

/**
 * print_alphabet - prints alphabet in lowercase
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{

	int i = 0;
	char l;

	for (i = 0; i < 9; i++)
	{
		for (l = 'a'; l <= 'z'; l++)
			_putchar(i);
	}
		_putchar('\n');

}
