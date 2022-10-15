#include <stdio.h>

/**
 * manin -  prints the alphabet in lowercase, and then in uppercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	char l, k;

	for (l = 'a'; l <= 'z'; l++)
	{		
		putchar(l);
	}

	for (k = 'A'; k <= 'Z'; k++)
	{
		putchar(k);
	}
	
	putchar('\n');
	return (0);
}

