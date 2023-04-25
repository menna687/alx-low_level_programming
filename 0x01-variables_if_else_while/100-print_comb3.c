#include <stdio.h>

/**
 * main - print combinations of 2 digits
 * Return: 0 in case of success (no errors)
 */
int main(void)
{
	int i, j;

	for (i = 48; i < 57; i++)
	{
		for (j = i + 1; j < 58; j++)
		{
			putchar(i);
			putchar(j);
		
			if (i != 56)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar(10);
	
	return (0);
}

