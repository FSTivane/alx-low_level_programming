#include <stdio.h>

/**
 * main - print alphabet excepf q.
 *
 * Return: Alwaws o.
 */
int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)

		if (l != 'q' || l != 'e')

		putchar(l);

	putchar('\n');

	return (0);

}

