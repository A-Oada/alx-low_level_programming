# include <stdio.h>

/**
 * main - Entry point - Prints all possible different combs of two digits.
 *
 * Return: Always 0
 */
int main(void)
{
	int no1 = 48, sep = 44, sp = 32, nl = 10;

	while (no1 < 57)
	{
		int no2 = no1 + 1;

		while (no2 <= 57)
		{
			putchar((char)no1);
			putchar((char)no2);
			if ((no1 < 56 || no2 < 57))
			{
				putchar((char)sep);
				putchar((char)sp);
			}
			no2++;
		}
		no1++;
	}
	putchar((char)nl);

	return (0);
}
