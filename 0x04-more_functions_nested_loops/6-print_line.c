#include "main.h"

/**
 * print_line - a function that draws a straight lne in the terminal.
 * followed by a new line.
 * @n: An input integar
 * Return: Always 0
 */
void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		for (; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
