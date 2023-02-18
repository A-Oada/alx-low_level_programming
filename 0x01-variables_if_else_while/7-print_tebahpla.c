#include <stdio.h>

/**
 * main - Entry point, print the entire alphabet in lowercase
 *
 * Return: Always 0
 */
int main(void)
{
	char alpha = 'z';
	char l = '\n';

	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}
	putchar(l);

	return (0);
}
