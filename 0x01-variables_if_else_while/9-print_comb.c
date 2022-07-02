#include <stdio.h>

/**
 * main - prints a series of numbers withe commas 
 *
 * Return: Always (Success)
 */
int main(void)
{
	int c;

	for (c = 'o'; c <= '9'; c++)
	{
		putchar(c);

		if (c != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	
	putchar('\n');

	return (0);
}
