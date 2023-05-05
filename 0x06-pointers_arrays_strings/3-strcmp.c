/**
 * _strcmp - compares two strings
 * @s1: pointer to string 1
 * @s2: pointer to string 2
 * Return: integer; > 0 if the first non-matching character in s1 is greater
 * (in ASCII) than that of s2;
 * < 0 if the first non-matching character in s1 is lower (in ASCII)
 * than that of s2; 0 if the 2 strings are matched
 */
int _strcmp(char *s1, char *s2)
{
	int diff;

	while ((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	diff = *s1 - *s2;

	return (diff);
}
