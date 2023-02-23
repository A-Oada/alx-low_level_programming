# include <stdio.h>

/**
 * main - Entry point - Prints even fibonacci sequence numbers up to 4*10^6
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long int fib[50] = {1, 2}, sum = 0;
	int i = 2, j = 0;

	/* Store the values of the sequence in an array */
	while (fib[i] <= 4000000)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
		i++;
	}
	j = 0;
	/* Print the elements of the loop */
	while (j <= i)
	{
		if (fib[j] % 2 == 0)
		{
			sum += fib[j];
		}
		j++;
	}
	printf("%lu\n", sum);

	return (0);
}
