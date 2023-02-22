# include "main.h"
# include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from input arg to 98
 * @i: Starting point of function
 *
 * Return: None
 */
void print_to_98(int i)
{
	while (i <= 98)
	{
		if (i < 98)
		{
			printf("%i, ", i);
		}
		else
		{
			printf("%i", i);
		}
		i++;
	}
	printf("\n");
}
