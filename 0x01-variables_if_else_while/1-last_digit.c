#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print last digit of number
 * Return: 0 in case of success (no errors)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last_digit = n%10;
	printf("Last digit of %d is %d ", n, last_digit);

	if (last_digit > 5)
		printf("and is greater than 5");
	else if (last_digit == 0)
		printf("and is 0");
	else
		printf("and is less than 6 and not 0");
	return (0);
}
