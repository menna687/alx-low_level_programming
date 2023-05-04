#include "main.h"
#include <stdio.h>
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length of string
 */
int _strlen(char *s)
{
	int len = 0;
	char *ptr;

	ptr = s;

	while (*ptr != '\0')
	{
		len++;
		ptr++;
	}

	return (len);
}
