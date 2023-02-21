# include "main.h"

/**
 * print_last_digit - Prints the last digit of a nuber
 * @j: Number whose last digit is to be found
 *
 * Return: The last digit of argument number
 */
int print_last_digit(int j)
{
	int l = j % 10;

	if (l < 0)
	{
		l *= -1;
	}
	_putchar('0' + l);

	return (l);
}
