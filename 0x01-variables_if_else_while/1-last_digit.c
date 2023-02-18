#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Finds the last digit of a random int and determine whether it's greater than
 * equal to or less than 5.
 *
 * Return: Always 0
 */
int main(void)
{
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	printf("Last digit of %i is ", n);
	if (last > 5)
		printf("%i and is greater than 5\n", last);
	else if (last == 0)
		printf("%i and is 0\n", last);
	else
		printf("%i and is less than 6 and not 0\n", last);

	return (0);
}
