# include <stdio.h>

/**
 * main - Entry point - Prints all single digit base 10 numbers
 *
 * Return: Always 0
 */
int main(void)
{
	char no = 0, l = '\n';

	while (no <= 9)
	{
		putchar('0' + no);
		no++;
	}
	putchar(l);

	return (0);
}
