#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms of the fibonacci
 * sequence that are less than 4,000,000, followed by a new line
 * Return: always 0
 */
int main(void)
{
	int num1 = 1, num2 = 2, tmp;
	int sum = 0;

	while (num2 <= 4000000)
	{
		if (num2 % 2 == 0)
			sum = sum + num2;

		tmp = num1;
		num1 = num2;
		num2 = num2 + tmp;
	}
	printf("%d\n", sum);

	return (0);
}
