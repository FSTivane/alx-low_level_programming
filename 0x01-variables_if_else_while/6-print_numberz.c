#include <stdio.h>

/**
 * main - prints numbers of base 10
 *
 * Return: o
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i % 10 );
	}
		putchar('\n');


	return (0);
}
