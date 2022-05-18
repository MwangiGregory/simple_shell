#include "shell.h"

/**
 * count_tokens - finds the number of words/token in string
 * pointed to by buf
 * @buf: pointer to a string
 * Return: number of tokens in string buf
 */
int count_tokens(char *buf)
{
	int i = 0;
	int no_of_tokens = 1;/*min no. of strings will always be 1*/

	while (buf[i])
	{
		if (buf[i] == ' ')
			no_of_tokens++;
		i++;
	}
	return (no_of_tokens);
}
