/**
 * strncpy - copies at most n bytes of the string pointed to by src
 * to the buffer pointed to by dest
 * @dest: pointer to buffer address to copy to
 * @src: pointer to string to be copied
 * @n : number of bytes to copy from src
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *tmp = dest;
	int i;

	for (i = 0; ((i < n) && (*src != '\0')); i++)
	{
		*tmp = *src;
		tmp++;
		src++;
	}

	while (i < n)
	{
		*tmp = '\0';
		tmp++;
		i++;
	}

	return (dest);
}
