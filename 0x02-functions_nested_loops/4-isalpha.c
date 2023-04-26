/**
 * _isalpha - check for alphabetic characters
 * @c: the caracter to be checked
 *
 * Return: 1 if the character is a letter (lowercase or uppercase), 0 otherwise
 */
int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
		return (1);
	else
		return (0);
}
