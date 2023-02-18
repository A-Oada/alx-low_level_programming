# include <stdio.h>

/**
 * main - Entry point - Prints single digit base 10 numbers wout using char
 *
 * Return: Always 0
 */
int main(void)
{
	int no = 48, nl = 10;

	while (no <= 57)
	{
		putchar((char)no);
		no++;
	}
	putchar(((char)nl));

	return (0);
}
