#include <stdio.h>

/**
 * main - all single digit numbers of base 10 starting from 0
 * (numbers of 0 to 9)
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		printf("%d", i);
	printf("\n");

	return (0);
}
