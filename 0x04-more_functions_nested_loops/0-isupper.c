#include "main.h"

/**
 *  _isupper - Checks whether a char is an upper case character
 * @c: ASCII value of char
 *
 * Return:
 * 1 if upper case
 * 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
