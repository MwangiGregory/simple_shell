#include "shell.h"

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
		if (!token)
			break;
		strings[i] = token;
		i++;
	}
}
