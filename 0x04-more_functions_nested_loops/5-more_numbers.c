# include "main.h"

/**
 * more_numbers - Prints the numbers 0 to 14, 10 times
 */
void more_numbers(void)
{
	int i = 0, j, k, l;

	while (i < 10) /* New Line loop */
	{
		j = '0', k = 47, l = 0;
		do {
			if (j > '9') /* j prints the first digit, it is reset to 1 at j == 10 */
			{
				j = '1'; /* Start of 2-digit numbers */
				k++; /* k prints the second digit, it is reset to 0 at k == 9 */
			}
			_putchar((char)j);
			if (k > 47) /*  Printing the second digit */
			{
				_putchar((char)k);
				k++;
			}
			if (l <= 9) /* Only increment J from 0 to 9, then*/
			{
				j++;
			}
			l++;
		} while (l <= 14);
		_putchar('\n');
		i++;
	}
}
