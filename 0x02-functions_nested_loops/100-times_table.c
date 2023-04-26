#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: time tables to be printed
 */
void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int row, col, res;

		for (row = 0; row <= n; row++)
		{
			for (col = 0; col <= n; col++)
			{
				res = row * col;

				if (res <= 9)
				{
					if (col != 0)
					{
						_putchar(' ');
						_putchar(' ');
					}
					_putchar('0' + res);
				}
				else if (res > 9 && res <= 99)
				{
					if (col != 0)
						_putchar(' ');
					_putchar('0' + res / 10);
					_putchar('0' + res % 10);
				}
				else
				{
					_putchar('0' + res / 100);
					_putchar('0' + ((res / 10) % 10));
					_putchar('0' + res % 10);
				}
				if (col != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
