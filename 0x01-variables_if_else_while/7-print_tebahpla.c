#include <stdio.h>

/**
 * main - print alphabet lowercase letters in reversed order
 * Return: 0 in case of success (no errors)
 */
int main(void)
{
	int i;

	for (i = 122; i > 96; i--)
		putchar(i);
	putchar(10);

	return (0);
}
