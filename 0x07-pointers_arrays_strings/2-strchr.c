#include <stddef.h>
/**
 * _strchr - locates a character in a string
 * @s: pointer to string
 * @c: character to search for
 *
 * Return: a pointer to the first occurrence of the character c
 * in the string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	char *index = NULL;

	while (*s != '\0')
	{
		if (*s == c)
		{
			index = s;
			break;
		}
		s++;
	}

	return (index);
}
