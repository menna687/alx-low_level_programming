#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: pointer to int (argument 1)
 * @b: pointer to int (argument 2)
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
