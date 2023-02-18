#include <stdio.h>

/**
 * main - Entry point, print the entire alphabet in lowercase
 *
 * Return: Always 0
 */
int main(void)
{
	char alpha = 'a';
	char l = '\n';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar(l);

	return (0);
}
