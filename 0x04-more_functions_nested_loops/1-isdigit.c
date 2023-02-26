# include "main.h"

/**
 * _isdigit - Checks whether a char is a digit
 * @c: char to be checked
 *
 * Return:
 * 1 if char is a digit
 * 0 elsewise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
