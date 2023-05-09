#include <stdio.h>
/**
 * main - print the alphabet letters in lowercase then in uppercase
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
		putchar(i);

	for (i = 65; i < 91; i++)
		putchar(i);
	putchar(10);

	return (0);
}
