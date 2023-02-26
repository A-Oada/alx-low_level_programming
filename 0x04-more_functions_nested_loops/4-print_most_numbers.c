# include "main.h"

/**
 * print_most_numbers - Prints numbers from 0 to 9 except for 2 and 4
 *
 * Return: Always 0
 */
void print_most_numbers(void)
{
	int i = 48;

	while (i < 58)
	{
		if (i == 50 || i == 52)
		{
			i++;
		}
		_putchar((char)i);
		i++;
	}
	_putchar('\n');
}
