#include <stdio.h>

/**
 * main - print the alphabet letters in lowercase excluding 'e' and 'q'
 * Return: 0 in case of success (no errors)
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (i == 101 || i == 113)
			continue;
		putchar(i);
	}
	putchar(10);

	return (0);
}
