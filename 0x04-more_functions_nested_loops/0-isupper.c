#include "main.h"
/**
 * _isupper - print capitalized alphabet
 * @c: c is an alphabet
 * Return: Always 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
