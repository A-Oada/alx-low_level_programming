# include <stdio.h>

/**
 * main - Entry point - Prints all possible combinations of single-digit no.
 *
 * Returm: 0
 */
int main(void)
{
	char no = '0', sep = ',', sp = ' ', nl = '\n';

	while (no <= '9')
	{
		putchar(no);
		putchar(sep);
		putchar(sp);
		no++;
	}
	putchar(nl);

	return (0);
}

