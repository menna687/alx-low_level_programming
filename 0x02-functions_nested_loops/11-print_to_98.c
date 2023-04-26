/**
 * print_to_98: prints all natural numbers from n to 98, followed by a new line
 * @n: number to start counting from
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i < 99; i++)
		{
			_putchar('0' + i);
			
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		for (i = n; i > 97; i--)
		{
			_putchar('0' + i);

			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
	
