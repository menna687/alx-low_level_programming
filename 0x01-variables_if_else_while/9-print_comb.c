#include <stdio.h>

/**
 * main - print digits from 0 to 9 followed by ", "
 * Return: 0 in case of success (no errors)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(44);
			putchar(32);
		}
	}

	putchar(10);

	return (0);
}
