#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int row, col, res;

	for (row = 0; row < 10; row++)
	{
		for (col = 0; col < 10; col++)
		{
			res = row * col;
			
			if (res > 9)
			{
				_putchar('0' + res / 10);
				_putchar('0' + res % 10);
			}
			else
			{
				if (col != 0)
					_putchar(' ');
				_putchar('0' + res);
			}

			if (col != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}	

