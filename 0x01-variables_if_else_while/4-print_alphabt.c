#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Use `putchar` to print all letters but the letter 'q' and 'e'
 * inside the main function.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'e' || c == 'q')
			continue;
		else
			putchar(c);
	}
	putchar('\n');

	return (0);
}
