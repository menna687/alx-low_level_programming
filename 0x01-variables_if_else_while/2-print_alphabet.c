#include <stdio.h>

/**
 * main - printthe alphabet in lowercase
 * Return: 0 in case of success (no errors)
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
		putchar(i);
	printf("\n");

	return (0);
}
