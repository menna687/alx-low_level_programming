#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2,
 * followed by a new line
 * Return: always 0
 */
int main(void)
{
	long int num1 = 1, num2 = 2, tmp;
	int i;

	printf("%ld, %ld, ", num1, num2);

	for (i = 0; i < 48; i++)
	{
		tmp = num1;
		num1 = num2;
		num2 = num2 + tmp;
		printf("%ld", num2);
		if (i != 47)
			printf(", ");
	}
	printf("\n");

	return (0);
}
