#include <stdio.h>

/**
 * main - program that prints all possible different combinations of 3 digits.
 * Return: 0
*/
int main(void)
{
	int n = 0;

	int c, d, u;

	while (n <= 999)
	{
		c = (n / 100 + '0');

		d = (n / 10 % 10 + '0');

		u = (n % 10 + '0');

		if ((c < d) && (d < u))
		{
			putchar(c);
			putchar(d);
			putchar(u);

			if (n != 789)
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

