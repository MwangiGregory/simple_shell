#include <unistd.h>

/**
 * _putchar - output string pointed to by s to stdout
 * @s: pointer to a string
 */
void _putchar(char *s)
{
	size_t len;

	for (len = 0; s[len]; len++)
		;
	if (write(1, s, len) == -1)
	{
		perror("Write failed to output to stdout");
		return;
	}
}
