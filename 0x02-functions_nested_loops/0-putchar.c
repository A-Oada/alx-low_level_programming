# include <stdio.h>
# include "main.h"

/**
 * main - Entry point
 *
 * Description: Prints _putchar, followed by a new line.
 *
 * Return: Always 0
 */
int main(void)
{
	char s[] = "_putchar";
	int i = 0;

	do {
		_putchar(s[i]);
		i++;
	} while (s[i] != '\0');
	_putchar('\n');

	return (0);
}
