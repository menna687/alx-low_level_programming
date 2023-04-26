#include "main.h"

/**
 * print_alphabet_x10 - print alphabet in lowercase followed by new line 10 times
 * Return: 0 in case of success (no errors)
 */
void print_alphabet_x10(void)
{
	int i, n;

	for (n = 0; n < 10; n++)
	{
		for (i = 97; i < 123; i++)
		{
			_putchar(i);
		}
		_putchar(10);
	}
}
