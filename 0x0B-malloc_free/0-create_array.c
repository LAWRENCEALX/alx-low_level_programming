#include "main.h"

/**
 * create_array - creates an array of char
 * @size: size of dtat in memeory
 * @c: a char to init array
 *
 * Return: a pointer to an array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *s;

	s = malloc(size * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
