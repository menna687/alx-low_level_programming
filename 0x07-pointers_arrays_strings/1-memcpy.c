/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: pointer to destination memory area
 * @src: pointer to source memory area
 * @n: number of bytes of memory area to be copied
 *
 * Return: a pointer to the memory area dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *tmp_d = dest;

	for (i = 0; i < n; i++)
	{
		*tmp_d = *src;
		tmp_d++;
		src++;
	}

	return (dest);
}
