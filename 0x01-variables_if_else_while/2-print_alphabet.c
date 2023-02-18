#include <stdio.h>

/**
 * main - Entry point, print the entire alphabet in lowercase
 *
 * Return: Always 0
 */
int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		printf("%c", alpha);
		alpha++;
	}
	printf("\n");

	return (0);
}
