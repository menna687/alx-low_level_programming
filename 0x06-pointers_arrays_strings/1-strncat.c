/**
 * _strncat - concatenates two strings (use at most n bytes from src)
 * @dest: string 1 (add string 2 at the end)
 * @src: string 2
 * @n : number of bytes to copy from src
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *tmp = dest;
	int i;

	while (*tmp != '\0')
	{
		tmp++;
	}
	for (i = 0; ((i < n) && (*src != '\0')); i++)
	{
		*tmp = *src;
		tmp++;
		src++;
	}

	*tmp = '\0';
	return (dest);
}
