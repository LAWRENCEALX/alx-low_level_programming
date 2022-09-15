#include "main.h"

/**
 * print_numbers - print 0-9
 * @void: No return value
 * Return: Always 0
 */
void print_numbers(void)
{
	int a;

	a = '0';

	for (a = '0'; a <= '9'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
