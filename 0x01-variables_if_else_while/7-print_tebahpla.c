#include <stdio.h>

/**
 * main - prints alphabet in reverse
 *
 * Return: o
 */

int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
		putchar('\n');

	return (0);
}
