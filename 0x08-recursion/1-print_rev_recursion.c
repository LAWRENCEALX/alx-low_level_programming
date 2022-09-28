#include "main.h"
/**
 * _print_rev_recursion - Print string in reserve
 * @s: string to be reversed
 * Return: Reversed string
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
