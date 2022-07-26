#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars, and initializes it with a char
 * @size: size of the array
 * @c: char to be initialized with
 * Return: pointer to array or null
 */
char *create_array(unsigned int size, char c)
{
	unsigned int n;
	char *str;

	if (size == 0)
		return (NULL);

	str = malloc(sizeof(char) * size);
	if (str == NULL)
		return (NULL);
	n = 0;
	while (n < size)
	{
		str[n] = c;
		n++;
	}
	return (str);
}
