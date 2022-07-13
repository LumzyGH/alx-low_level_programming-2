/**
 * File: 1-swap.c
 * Auth: Brenan D Baraban
 */

#include "main.h"

/**
 * swap_int - swap the values of the integars.
 * @a: the first integar to be swapped.
 * @b: the second integar to be swapped.
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
