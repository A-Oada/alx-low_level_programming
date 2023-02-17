#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
 * main - Print a phrase to std err without using printf or it's variables
 * p: The phrase to be printed
 *
 * Return: Always 1 (Error)
 */
int main(void)
{
	char p[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, p, strlen(p));

	return (1);
}
