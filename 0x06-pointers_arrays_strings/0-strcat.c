/**
 * _strcat - concatenates two strings
 * @dest: string 1 (add string 2 at the end)
 * @src: string 2
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	char *tmp = dest;

	while (*tmp != '\0')
	{
		tmp++;
	}
	while (*src != '\0')
	{
		*tmp = *src;
		tmp++;
		src++;
	}

	*tmp = '\0';
	return (dest);
}
