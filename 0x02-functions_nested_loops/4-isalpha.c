#include "main.h"
/**
 * _isalpha - Return 1 if letter is lowercase, 0 if not.
 * @c: char type letter
 *
 * Return: 1 if lower or uppercase, else return 0
 */

int _isalpha(int c)
{
	if ((c >= 65 && c < 91) || (c > 96 && c < 123))
		return (1);
	else
		return (0);
}
