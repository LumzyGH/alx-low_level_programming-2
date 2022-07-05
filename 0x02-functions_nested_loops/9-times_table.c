#include "main.h"

/**
 * times_table - prints the times table up to 9 times.
 *
 * Return: void(no value)
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
	for (j = 0; j < 10; j++)
	{
		int mul = i * j;

		if (j > 0)
		{
		if (mul < 10)
		{
		_putchar(',');
		_putchar(' ');
		-putchar(' ');
		}
		else
		{
		_putchar(',');
		_putchar(' ');
		}
		}

		if (mul < 10)
		{
		_putchar((mul / 10) + '0');
		_putchar((mul % 10) + '0');
		}
	}
	_putchar('\n');
	}
}
