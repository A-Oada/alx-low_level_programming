#include "main.h"

/**
 * times_table - prints 9 times table
 *
 * ReturnL Always 0
 */
void times_table(void)
{
	int no1 = 0, no2 = 0, no3;

	while (no1 <= 9)
	{
		no2 = 0;
		while (no2 <= 9)
		{
			no3 = no2 * no1;
			/* If no is single digit output it */
			if (no3 <= 9)
			{
				if (no2 != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar('0' + no3);
			}
			/* If no is a two digit output each digit */
			else if (no3 > 9 && no3 <= 99)
			{
				if (no2 != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				_putchar('0' + no3 / 10);	/* Output digit 1 of no */
				_putchar('0' + no3 % 10);	/* Output digit 2 of no */
			}
			no2++;
		}
		_putchar('\n');
		no1++;
	}
}
