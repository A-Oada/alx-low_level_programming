# include "main.h"

/**
 * print_line - Prints a straight line of a specified length
 * @n: Length of line
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
