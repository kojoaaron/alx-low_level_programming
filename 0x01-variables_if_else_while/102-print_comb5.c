#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print all possible combinations of two two-digit numbers.
 * Return: 0
 */

int main(void)
{
	int i, j;
	int a, b, c, d;

	for (i = 0; i < 100; i++)
	{
		a = i / 10; /* doubles firstnum */
		b = i % 10; /* singles firstnum */

		for (j = 0; j < 100; j++)
		{
			c = j / 10; /* doubles secondnum */
			d = j % 10; /* singles secondnum */

			if (a < c || (a == c && b < d))
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(32);
				putchar(c + '0');
				putchar(d + '0');

				if (!(a == 9 && b == 8))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar(10);

	return (0);
}
