#include <string.h>
#include <unistd.h>
#include <stdio.h>

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
/**
 * split_string - splits a string into 1 or more non empty tokens.
 * @line: pointer to a string
 * @strings: array of pointers
 * @delim: pointer to delimiting character/string
 */
void split_string(char *line, char **strings, char *delim)
{
	char *token;
	int i = 0;

	token = strtok(line, delim);
	strings[i] = token;
	i++;
	while (token)
	{
		token = strtok(NULL, delim);
		strings[i] = token;
		i++;
	}
}
