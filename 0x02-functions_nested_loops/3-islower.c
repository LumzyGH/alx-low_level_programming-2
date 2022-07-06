#include "main.h"

/**
 * islover - check if the input character is lowercase
 * @c: the character to check.
 *
 * Return: 1 if true and 0 if false
 */
int _islower(int c)
{
	if (c >= 97 && c <= 123)
	{
		return (1);
	}

	return (0);
}
