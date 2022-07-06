#include "main.h"

/**
 * * main - Print the word "_putchar" and a newline
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;

	char p[] = "_putchar";

	while (p[i] != '\0')
	{
		_putchar(p[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
