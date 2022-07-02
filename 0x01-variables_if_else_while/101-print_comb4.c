#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print all possible different combinations of 3 digits.
 *
 * Return: 0
 */

int main(void)
{
	int i, hundreds, tens, ones;

	for (i = 0; i < 1000; i++)
	{
		hundreds = i / 100; /* hundreds */
		tens = (i / 10) % 10; /* tens */
		ones = i % 10; /* singles */

		if (hundreds < tens && tens < ones)
		{
			putchar(hundreds + '0');
			putchar(tens + '0');
			putchar(ones + '0');

			if (i < 700)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
