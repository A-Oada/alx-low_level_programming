# include <stdio.h>

/**
 * main - Entry point - Prints all alphabet except q and e in lowercase
 *
 * Return: Always 0 
 */
int main(void)
{
	char alph = 'a', l = '\n';

	while (alph <= 'z')
	{
		if (alph == 'q' || alph == 'e')
			alph++;
		putchar(alph);
		alph++;
	}
	putchar(l);

	return (0);
}
