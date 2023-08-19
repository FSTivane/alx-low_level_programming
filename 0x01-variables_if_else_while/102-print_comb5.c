#include <stdio.h>

/**
 * main - prints all possible combination of 2 2 gigits
 *
 * Return: 0
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 100; i++)
	{
		int first_digit_i = i / 10;
		int second_digit_i = i % 10;

		for (j = i + 1; j < 100; j++)
		{
			int first_digit_j = j / 10;
			int second_digit_j = j % 10;

			putchar('0' + first_digit_i);
			putchar('0' + second_digit_i);
			putchar(' ');
			putchar('0' + first_digit_j);
			putchar('0' + second_digit_j);

			if (i != 98 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}

