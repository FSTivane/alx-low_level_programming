#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times in lowercase
 *
 * Author: Francisco Tivane
*/

void print_alphabet_x10(void)
{
	int i = 0;
	char l;

	for (i = 0; i <= 9; i++)
	{
		for (l = 'a';  l<= 'z'; l++)

			_putchar(l);

		_putchar('\n');
	}
}

