# include <stdio.h>

/**
 * main - Entry point - Prints first 50 fibonacci sequence numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int fib[49] = {1, 2}, i = 2, j = 0;

	/* Store the values of the sequence in an array*/
	while (i < 50)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
		i++;
	}
	/* Print the elements of the loop*/
	while (j < 49)
	{
		printf("%i", fib[j]);
		if (j != 49)
		{
			printf(", ");
		}
		j++;
	}
}

