#include "main.h"

/**
 * islover - check if the input character is lowercase
 * @c: the character to check.
 *
 * Return: 1 if true and 0 if false
 */
int _islower(int c)
{
	int val;

	if ((c >= 97 && c < 123) || (c >= 65 && c < 91))
		val = 1;
	else
		val = 0;

	return (val);
}
