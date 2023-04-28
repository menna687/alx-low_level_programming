#include "main.h"

/**
 * print_triangle - draws a triangle on the terminal using the character #
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int i, j, k;

	for (i = 0; i < size; i++)
	{
		for (j = (size - 1); j > i; j--)
			_putchar(' ');

		for (k = 0; k < (i + 1); k++)
			_putchar('#');

		_putchar('\n');
	}

	if (size <= 0)
		_putchar('\n');
}
