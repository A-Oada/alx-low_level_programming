#include <stdio.h>

void print_sum(int no);
/**
 * main - Entry point - Prints sum of all multiples of 3 or 5
 *
 * Return: Always 0
 */
int main(void)
{
	print_sum(3);
	print_sum(5);

	return(0);
}

void print_sum(int no)
{
	int sum = 0;

	while (no < 1024)
	{
		if ((no % 3) == 0)
		{
			sum = sum + no;
		}
		no++;
	}
	printf("%i\n", sum);
}
