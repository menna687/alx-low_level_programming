#include <stdio.h>
/**
 * main - print the alphabet letters in lowercase
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
		putchar(i);
	putchar(10);

	return (0);
}
