#include "main.h"

/**
 * print_alphabet - print alphabet in lowercase folowed by new line
 * Return: 0 in case of success (no errors)
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	_putchar(10);
}
