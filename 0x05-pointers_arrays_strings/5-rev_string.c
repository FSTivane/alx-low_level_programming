#include "main.h"

/**
 * rev_string - reverses a string
 * @s: parameter string
 *
 * Return: reverse string
 */

void rev_string(char *s)
{
	char string = s[0];
	int cont = 0;
	int i;

	while (s[cont] != '\0')
	{
		cont++;

	}

	for (i = 0; i < cont; i++)
	{
		cont--;
		string = s[i];
		s[i] = s[cont];
		s[cont] = string;
	}
}
