#include <unistd.h>
#include <string.h>

/**
 * main - prints exactly
 * and that piece of art is useful " - Dora Korpar, 2015-10-19,
 * followed by a new line, to the standard error
 * without using printf or puts
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	
	write(2, str, strnlen(str, sizeof(str)));
	return (1);
}
