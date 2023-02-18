# include <stdio.h>

/**
 * main - Entry point - Prints the entire alphabet lower and upper
 *
 * Return: Always 0
 */
int main(void)
{
	char low = 'a', high = 'A', l = '\n';

	while (low <= 'z')
	{
		putchar(low);
		low++;
	}
	while (high <= 'Z')
	{
		putchar(high);
		high++;
	}
	putchar(l);

	return (0);
}
