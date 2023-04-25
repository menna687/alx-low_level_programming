#include <stdio.h>

/**
 * main - print the alphabet letters in lowercase
 * Return: 0 in case of success (no errors)
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
		putchar(i);
	putchar(10);

	return (0);
}
