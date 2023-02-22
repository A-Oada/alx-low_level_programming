#include "main.h"

/**
 * times_table - prints 9 times table
 *
 * Return: Always 0
 */
void print_times_table(int n)
{
	int no1 = 0, no2 = 0, no3;

	if (n > 15 || n < 0)
		return;

	while (no1 <= n)
	{
		no2 = 0;
		while (no2 <= n)
		{
			no3 = no2 * no1;
			if (no3 <= 9)	/* If no is single digit output it */
			{
				if (no2 != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar('0' + no3);
			}
			else if (no3 > 9 && no3 <= 99)	/* If no is a two digit output each digit */
			{
				if (no2 != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar('0' + no3 / 10);	/* Output digit 1 of no */
				_putchar('0' + no3 % 10);	/* Output digit 2 of no */
			}
			else if (no3 > 99 && no3 <= 999)
			{
				if (no2 != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				_putchar('0' + no3 / 100);
				_putchar('0' + (no3 / 10) % 10);
				_putchar('0' + no3 % 10);
			}
			no2++;
		}
		_putchar('\n');
		no1++;
	}
}
