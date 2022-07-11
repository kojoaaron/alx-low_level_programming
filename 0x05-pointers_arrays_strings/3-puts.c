#include "main.h"

/**
 * _puts -  a function that prints a string, followed by a new line, to stdout
 * @str: char array string type
 * return - newline after string is printed
 */

void _puts(char *str)
{
	int n = 0;

	while (*(str + n) != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
