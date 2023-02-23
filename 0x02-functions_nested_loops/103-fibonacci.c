# include <stdio.h>

/**
 * main - Entry point - Prints first 50 fibonacci sequence numbers
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long int fib[50] = {1, 2};
	int i = 2, j = 0, k, sum;
	
	/* Store the values of the sequence in an array*/
	while (i <= 49)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
		if (fib[i - 2]  <= 4000000)
		{
			j++;
		}
		i++;
	}
	k = 0, sum = 0;
	/* Print the elements of the loop*/
	while (k <= j)
	{
		if (fib[k] % 2 == 0)
		{
			sum += fib[k];
		}
		k++;
	}
	printf("%i\n", sum);

	return (0);
}
