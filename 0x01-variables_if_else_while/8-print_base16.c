# include <stdio.h>

/**
 * main - Entry point - Prints all single digit base 16 numbers
 * 
 * Return: Always 0
 */
int main(void)
{
	char no = 48, nl = 10;

	while (no <= 102)
	{
		putchar(no);
		no++;
		if (no == 58)
		{
			no = no + 39;
		}
	}
	putchar(nl);

	return (0);
}
