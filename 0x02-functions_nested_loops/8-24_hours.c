# include "main.h"

/**
 * jack_bauer - testing for 8-24_hours.c
 *
 * Return: Always 0
 */
void jack_bauer(void)
{
	int hour1, hour2, min1, min2;

	hour1 = 0;
	while (hour1 <= 2)
	{
		hour2 = 0;
		while (hour2 <= 9)
		{
			min1 = 0;
			while (min1 <= 5)
			{
				min2 = 0;
				while (min2 <= 9)
				{
					_putchar('0' + hour1);
					_putchar('0' + hour2);
					_putchar(':');
					_putchar('0' + min1);
					_putchar('0' + min2);
					_putchar('\n');
					min2++;
				}
				min1++;
			}
			hour2++;
			if (hour1 == 2 && hour2 > 3)
				hour2 = hour2 + 6;
		}
		hour1++;
	}
}
