#include <stdio.h>

/**
 * main - program that prints all possible different combinations of 2 digits
 * Return: 0
*/
int main(void)

{
	int n = 0;

	int d, u;

	while (n <= 99)
	{
		d = (n / 10 + '0');

		u = (n % 10 + '0');

		if (d < u)
		{
			putchar(d);

			putchar(u);

			if (u != 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
		n++;
	}

putchar('\n');

return (0);

}

