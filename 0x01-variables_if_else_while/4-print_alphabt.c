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
	{
		if (l != 'e' && l != 'q')

		putchar(l);
	}
	putchar('\n');

	return (0);

}

