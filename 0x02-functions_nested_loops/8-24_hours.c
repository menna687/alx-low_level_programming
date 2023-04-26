#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int hr0, hr1, min0, min1;

	for (hr1 = 0; hr1 < 3; hr1++)
	{
		for (hr0 = 0; hr0 < 10; hr0++)
		{
			if (hr1 == 2 && hr0 >3)
				break;
			for (min1 = 0; min1 < 6; min1++)
			{
				for (min0 = 0; min0 < 10; min0++)
				{
					_putchar('0' + hr1 % 10);
					_putchar('0' + hr0 % 10);
					_putchar(':');
					_putchar('0' + min1 % 10);
					_putchar('0' + min0 % 10);
					_putchar('\n');
				}
			}
		}
	}
}

