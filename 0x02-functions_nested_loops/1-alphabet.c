# include <stdio.h>
# include "main.h"

/**
 * print_alphabet - Prints alphabet in lowercase
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
