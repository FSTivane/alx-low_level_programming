#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints number from 0 to 98
 * @n: argument starting from
 *
*/

void print_to_98(int n)
{

	if (n < 98)
	{
		for (n = n; n < 99; n++)
		{
			if (n != 98)
				printf("%d, ", n);
			else
				printf("%d\n", n);
		}

	}
	else
	{
		for (n = n; n > 97;  n--)
		{
			if (n != 98)
				printf("%d, ", n);
			else
				printf("%d\n", n);
		}
	}


}

