#include <stdio.h>

/**
 * main - Print the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char number;

	for (number = 0; number < 10; number++)
		putchar(number + '0');

	for (number = 'a'; number < 'g'; number++)
		putchar(number);

	putchar('\n');

	return (0);
}
