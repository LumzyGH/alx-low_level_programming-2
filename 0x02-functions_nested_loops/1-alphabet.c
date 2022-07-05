#include "main.h"

/**
 * print_alphabet - A function that out puts the alphabets
 *
 * Return: Always void(No return value)
 */
void print_alphabet(void)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar(alpha[i]);
	}
	_putchar('\n');
}
