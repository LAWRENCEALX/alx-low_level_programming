#include "main.h"
#include <limits.h>
/**
 * swap_int - function to swap numbers
 * @*a: pointer of  swapped numbers
 * @*b: pointer of swap number
 * Return: always 0
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
