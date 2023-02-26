# include "main.h"

/**
 * print_numbers - Prints numbers from 0 to 9
 *
 * Return: Always 0
 */
void print_numbers(void)
{
	int i = 48;

	while (i < 58)
	{
		_putchar((char)i);
		i++;
	}
	_putchar('\n');
}
