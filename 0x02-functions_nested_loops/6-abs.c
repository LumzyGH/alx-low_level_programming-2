#include "main.h"

/**
 * _abs - Transforms a given integar to its absolute value.
 * @n: The given integar
 *
 *
 *Return: Absolute value of the given integar.
*/
int _abs(int n)
{
	int abs;

	if (n >= 0)
		abs = n;
	else
		abs = -1 * n;

	return (abs);
}
