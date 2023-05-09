/**
 * _memset - fills memory with a constant byte
 * @s: pointer to memory area
 * @b: constant byte
 * @n: number of bytes of memory area to be filled
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *tmp = s;

	for (i = 0; i < n; i++)
	{
		*tmp = b;
		tmp++;
	}

	return (s);
}
