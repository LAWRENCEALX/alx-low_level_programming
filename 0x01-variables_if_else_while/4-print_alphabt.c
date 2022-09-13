# include <stdio.h>
/*
 * main - print letters of alphabet
 *
 * description: program will print alphabet in lower case
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	i = 97;

	while (i < 123)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
		i++;
	}
	purchar(10);

	return (0);
}
