#include <stdio.h>

/**
 * main - prints hexadecimal
 *
 * Return: o
 */

int main(void)
{
	int i;

	for (i = 0; i < 16; i++)
	{
		if (i > 9)
		{
			putchar('a' + i % 10) ;
		}
		else
		{
			putchar('0' + i);
		}
	}
		putchar('\n');

	return (0);
}
