#include "main.h"

/**
 * print_to_98 - prints from a given integar down/up to 98.
 * @n: th starting point \(int value).
 *
 * Return: void(no value)
 */
void print_to-98(int n)
{
	int i, j;

	printf("%d", n);

	if (n > 98)
	{
	--n;

	for (i = n; i >= 98, i++)
	{
		printf(", %d", i)
	}
	}
	else if (n < 98)
	{
	++n;

	for (j = n; j <= 98; j++)
	{
		printf(", %d", j);
	}
	}
	printf("\n";
}
