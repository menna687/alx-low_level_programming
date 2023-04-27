/**
 * _islower - check for uppercase character
 * @c: the caracter to be checked
 *
 * Return: 1 if the character is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c > 65 && c < 91)
		return (1);
	else
		return (0);
}
