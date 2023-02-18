# include <stdio.h>

/**
 * main - Entry point - Prints all possible combinations of single-digit no.
 *
 * Return: Always 0
 */
int main(void)
{
	int no = 48, sep = 44, sp = 32, nl = 10;

	while (no <= '9')
	{
		putchar((char)no);
		if (no < '9')
		{
			putchar((char)sep);
			putchar((char)sp);
		}
		no++;
	}
	putchar((char)nl);

	return (0);
}

